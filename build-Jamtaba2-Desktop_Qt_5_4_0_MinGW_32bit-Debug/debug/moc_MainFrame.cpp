/****************************************************************************
** Meta object code from reading C++ file 'MainFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/src/jamtaba/gui/MainFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainFrame_t {
    QByteArrayData data[35];
    char stringdata[540];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainFrame_t qt_meta_stringdata_MainFrame = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MainFrame"
QT_MOC_LITERAL(1, 10, 18), // "on_tabCloseRequest"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 21), // "on_preferencesClicked"
QT_MOC_LITERAL(5, 58, 22), // "on_IOPropertiesChanged"
QT_MOC_LITERAL(6, 81, 10), // "midiDevice"
QT_MOC_LITERAL(7, 92, 11), // "audioDevice"
QT_MOC_LITERAL(8, 104, 7), // "firstIn"
QT_MOC_LITERAL(9, 112, 6), // "lastIn"
QT_MOC_LITERAL(10, 119, 8), // "firstOut"
QT_MOC_LITERAL(11, 128, 7), // "lastOut"
QT_MOC_LITERAL(12, 136, 10), // "sampleRate"
QT_MOC_LITERAL(13, 147, 10), // "bufferSize"
QT_MOC_LITERAL(14, 158, 20), // "on_connectedInServer"
QT_MOC_LITERAL(15, 179, 30), // "QList<Login::AbstractJamRoom*>"
QT_MOC_LITERAL(16, 210, 21), // "on_startingRoomStream"
QT_MOC_LITERAL(17, 232, 23), // "Login::AbstractJamRoom*"
QT_MOC_LITERAL(18, 256, 4), // "room"
QT_MOC_LITERAL(19, 261, 21), // "on_stoppingRoomStream"
QT_MOC_LITERAL(20, 283, 17), // "on_enteringInRoom"
QT_MOC_LITERAL(21, 301, 16), // "on_enteredInRoom"
QT_MOC_LITERAL(22, 318, 17), // "on_exitedFromRoom"
QT_MOC_LITERAL(23, 336, 19), // "normalDisconnection"
QT_MOC_LITERAL(24, 356, 24), // "on_fxMenuActionTriggered"
QT_MOC_LITERAL(25, 381, 8), // "QAction*"
QT_MOC_LITERAL(26, 390, 16), // "on_editingPlugin"
QT_MOC_LITERAL(27, 407, 14), // "Audio::Plugin*"
QT_MOC_LITERAL(28, 422, 6), // "plugin"
QT_MOC_LITERAL(29, 429, 17), // "on_removingPlugin"
QT_MOC_LITERAL(30, 447, 19), // "onPluginScanStarted"
QT_MOC_LITERAL(31, 467, 20), // "onPluginScanFinished"
QT_MOC_LITERAL(32, 488, 15), // "onPluginFounded"
QT_MOC_LITERAL(33, 504, 24), // "Audio::PluginDescriptor*"
QT_MOC_LITERAL(34, 529, 10) // "descriptor"

    },
    "MainFrame\0on_tabCloseRequest\0\0index\0"
    "on_preferencesClicked\0on_IOPropertiesChanged\0"
    "midiDevice\0audioDevice\0firstIn\0lastIn\0"
    "firstOut\0lastOut\0sampleRate\0bufferSize\0"
    "on_connectedInServer\0"
    "QList<Login::AbstractJamRoom*>\0"
    "on_startingRoomStream\0Login::AbstractJamRoom*\0"
    "room\0on_stoppingRoomStream\0on_enteringInRoom\0"
    "on_enteredInRoom\0on_exitedFromRoom\0"
    "normalDisconnection\0on_fxMenuActionTriggered\0"
    "QAction*\0on_editingPlugin\0Audio::Plugin*\0"
    "plugin\0on_removingPlugin\0onPluginScanStarted\0"
    "onPluginScanFinished\0onPluginFounded\0"
    "Audio::PluginDescriptor*\0descriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    8,   93,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      19,    1,  116,    2, 0x08 /* Private */,
      20,    1,  119,    2, 0x08 /* Private */,
      21,    1,  122,    2, 0x08 /* Private */,
      22,    1,  125,    2, 0x08 /* Private */,
      24,    1,  128,    2, 0x08 /* Private */,
      26,    1,  131,    2, 0x08 /* Private */,
      29,    1,  134,    2, 0x08 /* Private */,
      30,    0,  137,    2, 0x08 /* Private */,
      31,    0,  138,    2, 0x08 /* Private */,
      32,    1,  139,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,

       0        // eod
};

void MainFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainFrame *_t = static_cast<MainFrame *>(_o);
        switch (_id) {
        case 0: _t->on_tabCloseRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_preferencesClicked(); break;
        case 2: _t->on_IOPropertiesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 3: _t->on_connectedInServer((*reinterpret_cast< QList<Login::AbstractJamRoom*>(*)>(_a[1]))); break;
        case 4: _t->on_startingRoomStream((*reinterpret_cast< Login::AbstractJamRoom*(*)>(_a[1]))); break;
        case 5: _t->on_stoppingRoomStream((*reinterpret_cast< Login::AbstractJamRoom*(*)>(_a[1]))); break;
        case 6: _t->on_enteringInRoom((*reinterpret_cast< Login::AbstractJamRoom*(*)>(_a[1]))); break;
        case 7: _t->on_enteredInRoom((*reinterpret_cast< Login::AbstractJamRoom*(*)>(_a[1]))); break;
        case 8: _t->on_exitedFromRoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_fxMenuActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->on_editingPlugin((*reinterpret_cast< Audio::Plugin*(*)>(_a[1]))); break;
        case 11: _t->on_removingPlugin((*reinterpret_cast< Audio::Plugin*(*)>(_a[1]))); break;
        case 12: _t->onPluginScanStarted(); break;
        case 13: _t->onPluginScanFinished(); break;
        case 14: _t->onPluginFounded((*reinterpret_cast< Audio::PluginDescriptor*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainFrame::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainFrame.data,
      qt_meta_data_MainFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainFrame.stringdata))
        return static_cast<void*>(const_cast< MainFrame*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE