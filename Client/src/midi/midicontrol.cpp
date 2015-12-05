#include "midicontrol.h"

///The constructor by default
MidiControl::MidiControl()
{

}
///The constructor with MainController pointer
///MainController gives access to midi and tracks
MidiControl::MidiControl(MainController *mCtrl):mainControl(mCtrl)
{

}

///The destructor
MidiControl::~MidiControl()
{

}

