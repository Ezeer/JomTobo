#ifndef MIDICONTROL_H
#define MIDICONTROL_H

//#include <QObject>
//#include <QWidget>
#include "MidiDriver.h"
#include "MainController.h"

///MidiControl class


using namespace Controller;
using namespace Midi;

enum EBoostLevel{high,zero,low};
enum EControlType{none,volume=7,pan=10,mute=16,solo=17};

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
    int channel;//the last channel used
    EControlType filterCtrl(MidiMessage *msg);///to find what control we receive
    void filterVolume(MidiMessage *msg);


 signals :
    //void changeVolume(int volume);
    //void changePan(int volume);
    //void mute(bool on);
    //void solo (bool on);
    //void boost(EBoostLevel lvl);
    void gainChanged(float newGain,int channel);
    void panChanged(float newPan);
    //void boostChanged(float boostInDecibels);//from top to bottom
    void muteChanged(bool muteStatus);
    void soloChanged(bool soloStatus);

};

#endif // MIDICONTROL_H
