/****************************************************************************
** Meta object code from reading C++ file 'bibliotecadc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BibliotecaDC/bibliotecadc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bibliotecadc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BibliotecaDC_t {
    QByteArrayData data[8];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BibliotecaDC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BibliotecaDC_t qt_meta_stringdata_BibliotecaDC = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BibliotecaDC"
QT_MOC_LITERAL(1, 13, 29), // "on_btnAcervoCadastrar_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 30), // "on_tblAcervoLivros_cellClicked"
QT_MOC_LITERAL(4, 75, 3), // "row"
QT_MOC_LITERAL(5, 79, 6), // "column"
QT_MOC_LITERAL(6, 86, 26), // "on_btnAcervoEditar_clicked"
QT_MOC_LITERAL(7, 113, 26) // "on_btnAcervoLimpar_clicked"

    },
    "BibliotecaDC\0on_btnAcervoCadastrar_clicked\0"
    "\0on_tblAcervoLivros_cellClicked\0row\0"
    "column\0on_btnAcervoEditar_clicked\0"
    "on_btnAcervoLimpar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BibliotecaDC[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    2,   35,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BibliotecaDC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BibliotecaDC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAcervoCadastrar_clicked(); break;
        case 1: _t->on_tblAcervoLivros_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_btnAcervoEditar_clicked(); break;
        case 3: _t->on_btnAcervoLimpar_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BibliotecaDC::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BibliotecaDC.data,
    qt_meta_data_BibliotecaDC,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BibliotecaDC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BibliotecaDC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BibliotecaDC.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BibliotecaDC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
