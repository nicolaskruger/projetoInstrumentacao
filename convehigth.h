#ifndef CONVEHIGTH_H
#define CONVEHIGTH_H
#include "convert.h"
#include <QTcpServer>

class conveHigth: public convert
{
    Q_OBJECT
protected:
    QTcpServer server;
    QHostAddress ip;
    short port;
public:
    conveHigth(QHostAddress ip,short port);
    bool startServer();
    void (*startServerErro)();
    void (*startServerSuccess)();

    ~conveHigth();
    QString conv(int n) override;
};

#endif // CONVEHIGTH_H
