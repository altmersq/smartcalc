/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../smartcalc/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_button_0_clicked",
    "",
    "on_button_1_clicked",
    "on_button_2_clicked",
    "on_button_3_clicked",
    "on_button_4_clicked",
    "on_button_5_clicked",
    "on_button_6_clicked",
    "on_button_7_clicked",
    "on_button_8_clicked",
    "on_button_9_clicked",
    "on_button_point_clicked",
    "on_button_eq_clicked",
    "on_button_c_clicked",
    "on_button_plus_clicked",
    "on_button_minus_clicked",
    "on_button_mul_clicked",
    "on_button_graph_clicked",
    "on_button_div_clicked",
    "calculateExpression",
    "on_button_back_clicked",
    "on_button_cos_clicked",
    "on_button_sin_clicked",
    "on_button_tan_clicked",
    "on_button_acos_clicked",
    "on_button_asin_clicked",
    "on_button_atan_clicked",
    "on_button_sqrt_clicked",
    "on_button_ln_clicked",
    "on_button_log_clicked",
    "on_button_close_bracket_clicked",
    "on_button_open_bracket_clicked",
    "on_button_goToCredit_clicked",
    "on_button_x_clicked",
    "on_button_mod_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[20];
    char stringdata8[20];
    char stringdata9[20];
    char stringdata10[20];
    char stringdata11[20];
    char stringdata12[24];
    char stringdata13[21];
    char stringdata14[20];
    char stringdata15[23];
    char stringdata16[24];
    char stringdata17[22];
    char stringdata18[24];
    char stringdata19[22];
    char stringdata20[20];
    char stringdata21[23];
    char stringdata22[22];
    char stringdata23[22];
    char stringdata24[22];
    char stringdata25[23];
    char stringdata26[23];
    char stringdata27[23];
    char stringdata28[23];
    char stringdata29[21];
    char stringdata30[22];
    char stringdata31[32];
    char stringdata32[31];
    char stringdata33[29];
    char stringdata34[20];
    char stringdata35[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "on_button_0_clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 19),  // "on_button_1_clicked"
        QT_MOC_LITERAL(52, 19),  // "on_button_2_clicked"
        QT_MOC_LITERAL(72, 19),  // "on_button_3_clicked"
        QT_MOC_LITERAL(92, 19),  // "on_button_4_clicked"
        QT_MOC_LITERAL(112, 19),  // "on_button_5_clicked"
        QT_MOC_LITERAL(132, 19),  // "on_button_6_clicked"
        QT_MOC_LITERAL(152, 19),  // "on_button_7_clicked"
        QT_MOC_LITERAL(172, 19),  // "on_button_8_clicked"
        QT_MOC_LITERAL(192, 19),  // "on_button_9_clicked"
        QT_MOC_LITERAL(212, 23),  // "on_button_point_clicked"
        QT_MOC_LITERAL(236, 20),  // "on_button_eq_clicked"
        QT_MOC_LITERAL(257, 19),  // "on_button_c_clicked"
        QT_MOC_LITERAL(277, 22),  // "on_button_plus_clicked"
        QT_MOC_LITERAL(300, 23),  // "on_button_minus_clicked"
        QT_MOC_LITERAL(324, 21),  // "on_button_mul_clicked"
        QT_MOC_LITERAL(346, 23),  // "on_button_graph_clicked"
        QT_MOC_LITERAL(370, 21),  // "on_button_div_clicked"
        QT_MOC_LITERAL(392, 19),  // "calculateExpression"
        QT_MOC_LITERAL(412, 22),  // "on_button_back_clicked"
        QT_MOC_LITERAL(435, 21),  // "on_button_cos_clicked"
        QT_MOC_LITERAL(457, 21),  // "on_button_sin_clicked"
        QT_MOC_LITERAL(479, 21),  // "on_button_tan_clicked"
        QT_MOC_LITERAL(501, 22),  // "on_button_acos_clicked"
        QT_MOC_LITERAL(524, 22),  // "on_button_asin_clicked"
        QT_MOC_LITERAL(547, 22),  // "on_button_atan_clicked"
        QT_MOC_LITERAL(570, 22),  // "on_button_sqrt_clicked"
        QT_MOC_LITERAL(593, 20),  // "on_button_ln_clicked"
        QT_MOC_LITERAL(614, 21),  // "on_button_log_clicked"
        QT_MOC_LITERAL(636, 31),  // "on_button_close_bracket_clicked"
        QT_MOC_LITERAL(668, 30),  // "on_button_open_bracket_clicked"
        QT_MOC_LITERAL(699, 28),  // "on_button_goToCredit_clicked"
        QT_MOC_LITERAL(728, 19),  // "on_button_x_clicked"
        QT_MOC_LITERAL(748, 21)   // "on_button_mod_clicked"
    },
    "MainWindow",
    "on_button_0_clicked",
    "",
    "on_button_1_clicked",
    "on_button_2_clicked",
    "on_button_3_clicked",
    "on_button_4_clicked",
    "on_button_5_clicked",
    "on_button_6_clicked",
    "on_button_7_clicked",
    "on_button_8_clicked",
    "on_button_9_clicked",
    "on_button_point_clicked",
    "on_button_eq_clicked",
    "on_button_c_clicked",
    "on_button_plus_clicked",
    "on_button_minus_clicked",
    "on_button_mul_clicked",
    "on_button_graph_clicked",
    "on_button_div_clicked",
    "calculateExpression",
    "on_button_back_clicked",
    "on_button_cos_clicked",
    "on_button_sin_clicked",
    "on_button_tan_clicked",
    "on_button_acos_clicked",
    "on_button_asin_clicked",
    "on_button_atan_clicked",
    "on_button_sqrt_clicked",
    "on_button_ln_clicked",
    "on_button_log_clicked",
    "on_button_close_bracket_clicked",
    "on_button_open_bracket_clicked",
    "on_button_goToCredit_clicked",
    "on_button_x_clicked",
    "on_button_mod_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  218,    2, 0x08,    1 /* Private */,
       3,    0,  219,    2, 0x08,    2 /* Private */,
       4,    0,  220,    2, 0x08,    3 /* Private */,
       5,    0,  221,    2, 0x08,    4 /* Private */,
       6,    0,  222,    2, 0x08,    5 /* Private */,
       7,    0,  223,    2, 0x08,    6 /* Private */,
       8,    0,  224,    2, 0x08,    7 /* Private */,
       9,    0,  225,    2, 0x08,    8 /* Private */,
      10,    0,  226,    2, 0x08,    9 /* Private */,
      11,    0,  227,    2, 0x08,   10 /* Private */,
      12,    0,  228,    2, 0x08,   11 /* Private */,
      13,    0,  229,    2, 0x08,   12 /* Private */,
      14,    0,  230,    2, 0x08,   13 /* Private */,
      15,    0,  231,    2, 0x08,   14 /* Private */,
      16,    0,  232,    2, 0x08,   15 /* Private */,
      17,    0,  233,    2, 0x08,   16 /* Private */,
      18,    0,  234,    2, 0x08,   17 /* Private */,
      19,    0,  235,    2, 0x08,   18 /* Private */,
      20,    0,  236,    2, 0x08,   19 /* Private */,
      21,    0,  237,    2, 0x08,   20 /* Private */,
      22,    0,  238,    2, 0x08,   21 /* Private */,
      23,    0,  239,    2, 0x08,   22 /* Private */,
      24,    0,  240,    2, 0x08,   23 /* Private */,
      25,    0,  241,    2, 0x08,   24 /* Private */,
      26,    0,  242,    2, 0x08,   25 /* Private */,
      27,    0,  243,    2, 0x08,   26 /* Private */,
      28,    0,  244,    2, 0x08,   27 /* Private */,
      29,    0,  245,    2, 0x08,   28 /* Private */,
      30,    0,  246,    2, 0x08,   29 /* Private */,
      31,    0,  247,    2, 0x08,   30 /* Private */,
      32,    0,  248,    2, 0x08,   31 /* Private */,
      33,    0,  249,    2, 0x08,   32 /* Private */,
      34,    0,  250,    2, 0x08,   33 /* Private */,
      35,    0,  251,    2, 0x08,   34 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_button_0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_point_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_eq_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_c_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_plus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_minus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_mul_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_graph_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_div_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calculateExpression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_cos_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_sin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_tan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_acos_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_asin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_atan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_sqrt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_ln_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_log_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_close_bracket_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_open_bracket_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_goToCredit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_x_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_mod_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_button_0_clicked(); break;
        case 1: _t->on_button_1_clicked(); break;
        case 2: _t->on_button_2_clicked(); break;
        case 3: _t->on_button_3_clicked(); break;
        case 4: _t->on_button_4_clicked(); break;
        case 5: _t->on_button_5_clicked(); break;
        case 6: _t->on_button_6_clicked(); break;
        case 7: _t->on_button_7_clicked(); break;
        case 8: _t->on_button_8_clicked(); break;
        case 9: _t->on_button_9_clicked(); break;
        case 10: _t->on_button_point_clicked(); break;
        case 11: _t->on_button_eq_clicked(); break;
        case 12: _t->on_button_c_clicked(); break;
        case 13: _t->on_button_plus_clicked(); break;
        case 14: _t->on_button_minus_clicked(); break;
        case 15: _t->on_button_mul_clicked(); break;
        case 16: _t->on_button_graph_clicked(); break;
        case 17: _t->on_button_div_clicked(); break;
        case 18: _t->calculateExpression(); break;
        case 19: _t->on_button_back_clicked(); break;
        case 20: _t->on_button_cos_clicked(); break;
        case 21: _t->on_button_sin_clicked(); break;
        case 22: _t->on_button_tan_clicked(); break;
        case 23: _t->on_button_acos_clicked(); break;
        case 24: _t->on_button_asin_clicked(); break;
        case 25: _t->on_button_atan_clicked(); break;
        case 26: _t->on_button_sqrt_clicked(); break;
        case 27: _t->on_button_ln_clicked(); break;
        case 28: _t->on_button_log_clicked(); break;
        case 29: _t->on_button_close_bracket_clicked(); break;
        case 30: _t->on_button_open_bracket_clicked(); break;
        case 31: _t->on_button_goToCredit_clicked(); break;
        case 32: _t->on_button_x_clicked(); break;
        case 33: _t->on_button_mod_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    return _id;
}
QT_WARNING_POP
