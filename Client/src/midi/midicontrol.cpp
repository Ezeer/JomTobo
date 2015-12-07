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
        case 7: filterVolume(msg);return volume;
        case 10: return pan;break;

        default: return none;
        }
    return none;
}

void MidiControl::filterVolume(MidiMessage *msg)
{
    int cc = msg->getData1();
    int ccValue = msg->getData2();

    qCInfo(jtMidi) << "Control Change received: "<<cc<<" value="<<ccValue<<" on channel :"<<channel;
    //emit changeVolume(ccValue);
    emit gainChanged(ccValue/127.0,channel);
    //mainControl->getInputTrack(inputTrackIndex)->setGain(ccValue/127.0);

}

///The destructor
MidiControl::~MidiControl()
{

}

