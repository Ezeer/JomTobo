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

MidiBuffer MidiControl::filterMidiMsg(MidiBuffer Buffer)
{
    MidiBuffer midiBuffer (Buffer);
    int messages = midiBuffer.getMessagesCount();
    for(int m=0; m < messages; m++)
    {
        Midi::MidiMessage msg = midiBuffer.getMessage(m);
        //intercept CC

        if(msg.isControl()){
            int inputTrackIndex = 0;//just for test for while, we need get this index from the mapping pair
            char cc = msg.getData1();
            char ccValue = msg.getData2();
            qCDebug(jtMidi) << "Control Change received: " << QString::number(cc) << " -> " << QString::number(ccValue);
            mainControl->getInputTrack(inputTrackIndex)->setGain(ccValue/127.0);
        }
    }
    return midiBuffer;
}

///The destructor
MidiControl::~MidiControl()
{

}

