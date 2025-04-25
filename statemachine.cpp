//
// Statemachine code from reading SCXML file 'stateChart.scxml'
// Created by: The Qt SCXML Compiler version 2 (Qt 6.3.0)
// WARNING! All changes made in this file will be lost!
//

#include "statemachine.h"

#include <qscxmlinvokableservice.h>
#include <qscxmltabledata.h>
#include <QScxmlNullDataModel>

#if !defined(Q_QSCXMLC_OUTPUT_REVISION)
#error "The header file 'stateChart.scxml' doesn't include <qscxmltabledata.h>."
#elif Q_QSCXMLC_OUTPUT_REVISION != 2
#error "This file was generated using the qscxmlc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The qscxmlc has changed too much.)"
#endif

struct stateChart::Data: private QScxmlTableData {
    Data(stateChart &stateMachine)
        : stateMachine(stateMachine)
    {}

    void init() {
        stateMachine.setTableData(this);
        stateMachine.setDataModel(&dataModel);
    }

    QString name() const override final
    { return string(0); }

    QScxmlExecutableContent::ContainerId initialSetup() const override final
    { return -1; }

    QScxmlExecutableContent::InstructionId *instructions() const override final
    { return theInstructions; }

    QScxmlExecutableContent::StringId *dataNames(int *count) const override final
    { *count = 0; return dataIds; }

    QScxmlExecutableContent::EvaluatorInfo evaluatorInfo(QScxmlExecutableContent::EvaluatorId evaluatorId) const override final
    { Q_ASSERT(evaluatorId >= 0); Q_ASSERT(evaluatorId < 0); return evaluators[evaluatorId]; }

    QScxmlExecutableContent::AssignmentInfo assignmentInfo(QScxmlExecutableContent::EvaluatorId assignmentId) const override final
    { Q_ASSERT(assignmentId >= 0); Q_ASSERT(assignmentId < 0); return assignments[assignmentId]; }

    QScxmlExecutableContent::ForeachInfo foreachInfo(QScxmlExecutableContent::EvaluatorId foreachId) const override final
    { Q_ASSERT(foreachId >= 0); Q_ASSERT(foreachId < 0); return foreaches[foreachId]; }

    QString string(QScxmlExecutableContent::StringId id) const override final
    {
        Q_ASSERT(id >= QScxmlExecutableContent::NoString); Q_ASSERT(id < 5);
        if (id == QScxmlExecutableContent::NoString) return QString();
        const auto dataOffset = strings.offsetsAndSize[id * 2];
        const auto dataSize = strings.offsetsAndSize[id * 2 + 1];
        return QString::fromRawData(reinterpret_cast<const QChar*>(&strings.stringdata[dataOffset]), dataSize);
    }

    const qint32 *stateMachineTable() const override final
    { return theStateMachineTable; }

    QScxmlInvokableServiceFactory *serviceFactory(int id) const override final;

    stateChart &stateMachine;
    QScxmlNullDataModel dataModel;

    static QScxmlExecutableContent::ParameterInfo param(QScxmlExecutableContent::StringId name,
                                                        QScxmlExecutableContent::EvaluatorId expr,
                                                        QScxmlExecutableContent::StringId location)
    {
        QScxmlExecutableContent::ParameterInfo p;
        p.name = name;
        p.expr = expr;
        p.location = location;
        return p;
    }

    static QScxmlExecutableContent::InvokeInfo invoke(
            QScxmlExecutableContent::StringId id,
            QScxmlExecutableContent::StringId prefix,
            QScxmlExecutableContent::EvaluatorId expr,
            QScxmlExecutableContent::StringId location,
            QScxmlExecutableContent::StringId context,
            QScxmlExecutableContent::ContainerId finalize,
            bool autoforward)
    {
        QScxmlExecutableContent::InvokeInfo i;
        i.id = id;
        i.prefix = prefix;
        i.expr = expr;
        i.location = location;
        i.context = context;
        i.finalize = finalize;
        i.autoforward = autoforward;
        return i;
    }

    static qint32 theInstructions[];
    static QScxmlExecutableContent::StringId dataIds[];
    static QScxmlExecutableContent::EvaluatorInfo evaluators[];
    static QScxmlExecutableContent::AssignmentInfo assignments[];
    static QScxmlExecutableContent::ForeachInfo foreaches[];
    static const qint32 theStateMachineTable[];
    static struct Strings {
        const uint offsetsAndSize[5 * 2];
        char16_t stringdata[36];
    } strings;
};

stateChart::stateChart(QObject *parent)
    : QScxmlStateMachine(&staticMetaObject, parent)
    , data(new Data(*this))
{ qRegisterMetaType<stateChart *>(); data->init(); }

stateChart::~stateChart()
{ delete data; }

QScxmlInvokableServiceFactory *stateChart::Data::serviceFactory(int id) const
{
    Q_UNUSED(id);
    Q_UNREACHABLE();
}

qint32 stateChart::Data::theInstructions[] = {
-1
};

QScxmlExecutableContent::StringId stateChart::Data::dataIds[] = {
-1
};

QScxmlExecutableContent::EvaluatorInfo stateChart::Data::evaluators[] = {
{ -1, -1 }
};

QScxmlExecutableContent::AssignmentInfo stateChart::Data::assignments[] = {
{ -1, -1, -1 }
};

QScxmlExecutableContent::ForeachInfo stateChart::Data::foreaches[] = {
{ -1, -1, -1, -1 }
};

stateChart::Data::Strings stateChart::Data::strings = {{
0, 10, 11, 2, 14, 14, 29, 2, 32, 2
},{
0x73,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x72,0x74,0, // 0: stateChart
0x53,0x31,0, // 1: S1
0x62,0x75,0x74,0x74,0x6f,0x6e,0x2e,0x63,0x6c,0x69,0x63,0x6b,0x65,0x64,0, // 2: button.clicked
0x53,0x32,0, // 3: S2
0x53,0x33,0 // 4: S3
}};

const qint32 stateChart::Data::theStateMachineTable[] = {
	0x2, // version
	0, // name
	0, // data-model
	18, // child states array offset
	3, // transition to initial states
	-1, // initial setup
	0, // binding
	-1, // maxServiceId
	14, 3, // state offset and count
	47, 4, // transition offset and count
	71, 24, // array offset and size

	// States:
	1, -1, 0, -1, -1, -1, -1, -1, -1, 4, -1,
	3, -1, 0, -1, -1, -1, -1, -1, -1, 10, -1,
	4, -1, 0, -1, -1, -1, -1, -1, -1, 16, -1,

	// Transitions:
	2, -1, 1, 0, 0, -1, 
	8, -1, 1, 1, 6, -1, 
	14, -1, 1, 2, 12, -1, 
	-1, -1, 2, -1, 22, -1, 

	// Arrays:
	1, 1, 
	1, 2, 
	1, 0, 
	1, 2, 
	1, 2, 
	1, 1, 
	1, 0, 
	1, 2, 
	1, 2, 
	3, 0, 1, 2, 
	1, 0, 

	0xc0ff33 // terminator
};

struct qt_meta_stringdata_stateChart_t {
    const uint offsetsAndSize[22];
    unsigned char stringdata0[75];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_stateChart_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_stateChart_t qt_meta_stringdata_stateChart = {
    {
QT_MOC_LITERAL(0, 10), // "stateChart"
QT_MOC_LITERAL(11, 9), // "S1Changed"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 6), // "active"
QT_MOC_LITERAL(29, 9), // "S2Changed"
QT_MOC_LITERAL(39, 9), // "S3Changed"
QT_MOC_LITERAL(49, 9), // "QObject *"
QT_MOC_LITERAL(59, 6), // "parent"
QT_MOC_LITERAL(66, 2), // "S1"
QT_MOC_LITERAL(69, 2), // "S2"
QT_MOC_LITERAL(72, 2) // "S3"
    },{
0x73,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x72,0x74,0, // 0: stateChart
0x53,0x31,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 1: S1Changed
0, // 2: 
0x61,0x63,0x74,0x69,0x76,0x65,0, // 3: active
0x53,0x32,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 4: S2Changed
0x53,0x33,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 5: S3Changed
0x51,0x4f,0x62,0x6a,0x65,0x63,0x74,0x20,0x2a,0, // 6: QObject *
0x70,0x61,0x72,0x65,0x6e,0x74,0, // 7: parent
0x53,0x31,0, // 8: S1
0x53,0x32,0, // 9: S2
0x53,0x33,0 // 10: S3
    }};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stateChart[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       1,   59, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,
       4,    1,   35,    2, 0x06,    5 /* Public */,
       5,    1,   38,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00115001, uint(0), 0,
       9, QMetaType::Bool, 0x00115001, uint(1), 0,
      10, QMetaType::Bool, 0x00115001, uint(2), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   41,    2, 0x0e,    9 /* Public */,

       0        // eod
};

void stateChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { stateChart *_r = new stateChart((*reinterpret_cast< QObject **>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<stateChart *>(_o);
        (void)_t;
        switch (_id) {
        case 0: QMetaObject::activate(_o, &staticMetaObject, 0, _a); break;
        case 1: QMetaObject::activate(_o, &staticMetaObject, 1, _a); break;
        case 2: QMetaObject::activate(_o, &staticMetaObject, 2, _a); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        (void)result;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<stateChart *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(0); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(1); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isActive(2); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject stateChart::staticMetaObject = { {
    QMetaObject::SuperData::link<QScxmlStateMachine::staticMetaObject>(),
    qt_meta_stringdata_stateChart.offsetsAndSize,
    qt_meta_data_stateChart,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_stateChart_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
>,
    nullptr
} };


const QMetaObject *stateChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stateChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, reinterpret_cast<const char *>(
            qt_meta_stringdata_stateChart.stringdata0)))
        return static_cast<void*>(const_cast< stateChart*>(this));
    return QScxmlStateMachine::qt_metacast(_clname);
}

int stateChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlStateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

