#ifndef GENERICSERVER_H
#define GENERICSERVER_H
#include <QObject>
#include <QTcpServer>

class genericServer:public QObject
{
    Q_OBJECT
protected:
    QHostAddress ip;
    short port;
    QTcpServer server;
    QTcpSocket* socket;
    void (*startSuccses)();
    void (*startFail)();

    virtual bool startServer();
protected slots:
    virtual void acceptConnection()=0;
    virtual void respondToConnection()=0;
    virtual void connectionAboutToClose()=0;
public:
    genericServer(QHostAddress ip,short port);
};

#endif // GENERICSERVER_H
