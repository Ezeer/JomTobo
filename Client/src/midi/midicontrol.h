#ifndef MIDICONTROL_H
#define MIDICONTROL_H

#include <QObject>
#include <QWidget>
#include "MidiDriver.h"
#include "MainController.h"

///MidiControl class


using namespace Controller;
using namespace Midi;

enum EBoostLevel{high,zero,low};
enum EControlType{none,volume,pan,mute,solo};

class MidiControl : public QObject
{
    Q_OBJECT

public:
    MidiControl();
    MidiControl(MainController* mCtrl);
    ~MidiControl();
    MidiBuffer filterMidiMsg(MidiBuffer Buffer);//return the number of msgs
private:
    MainController* mainControl;
    EControlType filterCtrl(MidiMessage *msg);///to find what control we receive
    void filterVolume(MidiMessage *msg);

 signals :
    void changeVolume(float volume);
    void changePan(float volume);
    void mute(bool on);
    void solo (bool on);
    void boost(EBoostLevel lvl);

};

#endif // MIDICONTROL_H
