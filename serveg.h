#ifndef SERVEG_H
#define SERVEG_H

#include <QObject>
#include <QTcpServer>


class ServeG:public QObject
{
Q_OBJECT
protected:
    QTcpServer server;
    QHostAddress ip;
    short port;
public slots:
//    virtual void acceptConnection()=0;
//    virtual void responToConnection()=0;
//    virtual void connectionAboutToClose()=0;
    virtual void acceptConnection(){}
    virtual void responToConnection(){}
    virtual void connectionAboutToClose(){}
signals:
    void erroStart();
    void succesStart();
public:
    virtual void startServer();
    ServeG(QHostAddress ip=QHostAddress::LocalHost,short port=4242);
};

#endif // SERVEG_H
