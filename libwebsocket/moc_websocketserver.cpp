/****************************************************************************
** Meta object code from reading C++ file 'websocketserver.h'
**
** Created: Thu May 14 20:34:53 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "protocol/websocket/websocketserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'websocketserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebsocketServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      54,   16,   16,   16, 0x08,
      62,   16,   16,   16, 0x08,
      87,   79,   16,   16, 0x08,
     127,  122,   16,   16, 0x08,
     165,   16,   16,   16, 0x08,
     197,   16,   16,   16, 0x08,
     230,   16,   16,   16, 0x08,
     247,   16,   16,   16, 0x08,
     271,  267,   16,   16, 0x08,
     312,   16,   16,   16, 0x08,
     331,  329,   16,   16, 0x08,
     401,  395,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebsocketServer[] = {
    "WebsocketServer\0\0incomingData()\0"
    "handleNewConnection()\0ready()\0"
    "slot_encrypted()\0written\0"
    "slot_encryptedBytesWritten(qint64)\0"
    "mode\0slot_modeChanged(QSslSocket::SslMode)\0"
    "slot_peerVerifyError(QSslError)\0"
    "slot_sslErrors(QList<QSslError>)\0"
    "slot_connected()\0slot_disconnected()\0"
    "err\0slot_error(QAbstractSocket::SocketError)\0"
    "slot_hostFound()\0,\0"
    "slot_proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    "state\0slot_stateChanged(QAbstractSocket::SocketState)\0"
};

void WebsocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebsocketServer *_t = static_cast<WebsocketServer *>(_o);
        switch (_id) {
        case 0: _t->incomingData(); break;
        case 1: _t->handleNewConnection(); break;
        case 2: _t->ready(); break;
        case 3: _t->slot_encrypted(); break;
        case 4: _t->slot_encryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->slot_modeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        case 6: _t->slot_peerVerifyError((*reinterpret_cast< const QSslError(*)>(_a[1]))); break;
        case 7: _t->slot_sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->slot_connected(); break;
        case 9: _t->slot_disconnected(); break;
        case 10: _t->slot_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 11: _t->slot_hostFound(); break;
        case 12: _t->slot_proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 13: _t->slot_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebsocketServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebsocketServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_WebsocketServer,
      qt_meta_data_WebsocketServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebsocketServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebsocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebsocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebsocketServer))
        return static_cast<void*>(const_cast< WebsocketServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int WebsocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE