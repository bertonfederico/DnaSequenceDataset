/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_run_button_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 35), // "on_input_file_field_editingFi..."
QT_MOC_LITERAL(4, 70, 36), // "on_output_file_field_editingF..."
QT_MOC_LITERAL(5, 107, 36), // "on_parameter_n_field_editingF..."
QT_MOC_LITERAL(6, 144, 36), // "on_parameter_k_field_editingF..."
QT_MOC_LITERAL(7, 181, 11), // "clearOutput"
QT_MOC_LITERAL(8, 193, 18), // "splitStringByComma"
QT_MOC_LITERAL(9, 212, 6), // "string"
QT_MOC_LITERAL(10, 219, 13), // "stringToSplit"
QT_MOC_LITERAL(11, 233, 12), // "vector<int>&"
QT_MOC_LITERAL(12, 246, 1), // "v"
QT_MOC_LITERAL(13, 248, 11), // "getFileSize"
QT_MOC_LITERAL(14, 260, 8), // "fileName"
QT_MOC_LITERAL(15, 269, 15), // "setCsvFilesName"
QT_MOC_LITERAL(16, 285, 14), // "connectSignals"
QT_MOC_LITERAL(17, 300, 13), // "RunAlgorithm*"
QT_MOC_LITERAL(18, 314, 3), // "run"
QT_MOC_LITERAL(19, 318, 16), // "updateTestsValue"
QT_MOC_LITERAL(20, 335, 6), // "isFull"
QT_MOC_LITERAL(21, 342, 9), // "isIterate"
QT_MOC_LITERAL(22, 352, 5), // "value"
QT_MOC_LITERAL(23, 358, 13), // "getMessageBox"
QT_MOC_LITERAL(24, 372, 7), // "message"
QT_MOC_LITERAL(25, 380, 5) // "title"

    },
    "MainWindow\0on_run_button_clicked\0\0"
    "on_input_file_field_editingFinished\0"
    "on_output_file_field_editingFinished\0"
    "on_parameter_n_field_editingFinished\0"
    "on_parameter_k_field_editingFinished\0"
    "clearOutput\0splitStringByComma\0string\0"
    "stringToSplit\0vector<int>&\0v\0getFileSize\0"
    "fileName\0setCsvFilesName\0connectSignals\0"
    "RunAlgorithm*\0run\0updateTestsValue\0"
    "isFull\0isIterate\0value\0getMessageBox\0"
    "message\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    2,   85,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    1,   94,    2, 0x08 /* Private */,
      19,    3,   97,    2, 0x08 /* Private */,
      23,    2,  104,    2, 0x08 /* Private */,
      23,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Int, 0x80000000 | 9,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   24,   25,
    QMetaType::Void, 0x80000000 | 9,   24,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_run_button_clicked(); break;
        case 1: _t->on_input_file_field_editingFinished(); break;
        case 2: _t->on_output_file_field_editingFinished(); break;
        case 3: _t->on_parameter_n_field_editingFinished(); break;
        case 4: _t->on_parameter_k_field_editingFinished(); break;
        case 5: _t->clearOutput(); break;
        case 6: { bool _r = _t->splitStringByComma((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< vector<int>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getFileSize((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCsvFilesName(); break;
        case 9: _t->connectSignals((*reinterpret_cast< RunAlgorithm*(*)>(_a[1]))); break;
        case 10: _t->updateTestsValue((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->getMessageBox((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 12: _t->getMessageBox((*reinterpret_cast< string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RunAlgorithm* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
