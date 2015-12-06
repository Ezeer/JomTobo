#include "midicontrol.h"
#include "log/logging.h"

///The constructor by default
MidiControl::MidiControl()
{

}
///The constructor with MainController pointer
///MainController gives access to midi and tracks
MidiControl::MidiControl(MainController *mCtrl):mainControl(mCtrl)
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
        filterVolume(&msg);
        EControlType ctrl=filterCtrl(&msg);
        //qCInfo(jtMidi) << "Control Change received: " << ctrl;


    }
    return midiBuffer;
}

EControlType MidiControl::filterCtrl(Midi::MidiMessage *msg)
{
   if(!msg->isControl())
   {
       //qCInfo(jtMidi) << "NO Control Change received: "<<msg.getData1() ;
       return none;

   }

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
    int inputTrackIndex = 0;//just for test for while, we need get this index from the mapping pair
    char cc = msg->getData1();
    char ccValue = msg->getData2();
    qCInfo(jtMidi) << "Control Change received: "<<cc<<" value="<<ccValue ;

    mainControl->getInputTrack(inputTrackIndex)->setGain(ccValue/127.0);

}

///The destructor
MidiControl::~MidiControl()
{

}

