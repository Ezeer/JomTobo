#include "midicontrol.h"
#include "log/logging.h"

///The constructor by default
MidiControl::MidiControl()
{

}
///The constructor with MainController pointer
///MainController gives access to midi and tracks
MidiControl::MidiControl(MainController *mCtrl):mainControl(mCtrl),channel(1)
{

}

//receive the midi packets and dispatch signals to tracks slots
MidiBuffer MidiControl::filterMidiMsg(MidiBuffer Buffer)
{
    MidiBuffer midiBuffer (Buffer);
    int messages = midiBuffer.getMessagesCount();
    for(int m=0; m < messages; m++)
    {
        Midi::MidiMessage msg = midiBuffer.getMessage(m);
        if(!msg.isControl())
        {
            //qCInfo(jtMidi) << "NO Control Change received: "<<msg.getData1() ;

        }
        channel=msg.getChannel();

        EControlType ctrl=filterCtrl(&msg);
       // qCInfo(jtMidi) << "Control Change type received: " << ctrl;


    }
    return midiBuffer;
}

EControlType MidiControl::filterCtrl(Midi::MidiMessage *msg)
{


        switch(msg->getData1())
        {
        case 7: filterVolume(msg->getData2());return volume;
        case 10: filterPan(msg->getData2());return pan;break;

        default: return none;
        }
    return none;
}

void MidiControl::filterVolume(int value)
{
    //gain range is[-1,1], zero is center
float val=(value/(127/2.0f)*1.0f);
emit gainChanged(value,channel);
}

void MidiControl::filterPan(int value)
{
    //pan range is[-4,4], zero is center
float val=-4.0f+(value/(127/2.0f)*4.0f);
emit panChanged(val,channel);
}

///The destructor
MidiControl::~MidiControl()
{

}

