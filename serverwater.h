
#ifndef SERVERWATER_H
#define SERVERWATER_H
#include "serveg.h"
#include <QTcpSocket>

class ServerWater:public ServeG
{
    Q_OBJECT
protected:
    QTcpSocket* socket;
public slots:
    virtual void acceptConnection() override;
    virtual void responToConnection() override;
    virtual void connectionAboutToClose() override;
signals:
    void response(QString val);
    void disconetMsg(QString msg);
    void acceptConnect(QString c);
public:
    ServerWater(QHostAddress ip=QHostAddress::LocalHost,short port=4242);
};

#endif // SERVERWATER_H
