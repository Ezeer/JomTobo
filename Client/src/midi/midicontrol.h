#ifndef MIDICONTROL_H
#define MIDICONTROL_H

#include <QObject>
#include <QWidget>
#include "MidiDriver.h"
#include "MainController.h"

///MidiControl class


using namespace Controller;

class MidiControl
{
public:
    MidiControl();
    MidiControl(MainController* mCtrl);
    ~MidiControl();
private:
    MainController* mainControl;
};

#endif // MIDICONTROL_H
