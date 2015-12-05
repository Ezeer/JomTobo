#ifndef MIDICONTROL_H
#define MIDICONTROL_H

#include <QObject>
#include <QWidget>
#include "MidiDriver.h"
#include "MainController.h"

///MidiControl class


using namespace Controller;
using namespace Midi;

class MidiControl
{
public:
    MidiControl();
    MidiControl(MainController* mCtrl);
    ~MidiControl();
    MidiBuffer filterMidiMsg(MidiBuffer Buffer);//return the number of msgs
private:
    MainController* mainControl;

};

#endif // MIDICONTROL_H
