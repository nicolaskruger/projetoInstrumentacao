#include "serverwater.h"

void ServerWater::acceptConnection()
{
    socket = server.nextPendingConnection();

    connect(socket,SIGNAL(readyRead()),this,SLOT(responToConnection()));

    connect(socket,SIGNAL(disconnected()),this,SLOT(connectionAboutToClose()));

    disconnect(&server,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
    emit acceptConnect("conexão socket");
}

void ServerWater::responToConnection()
{
    QByteArray buf;
    buf = socket->read(2000);
    QString bufStr = QString(buf);
    emit response(bufStr);
}

void ServerWater::connectionAboutToClose()
{
    emit disconetMsg("Connection to cliente close");
    socket->close();
    connect(&server,SIGNAL(newConnection()),this,SLOT(acceptConnection));
}

ServerWater::ServerWater(QHostAddress ip, short port):ServeG(ip,port)
{
    connect(&server,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
}
