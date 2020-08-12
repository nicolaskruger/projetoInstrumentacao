#ifndef SERVER_H
#define SERVER_H
#include "genericserver.h"

class Server:public genericServer
{
    Q_OBJECT
protected:
    virtual void acceptConnection();
    virtual void respondToConnection();
    virtual void connectionAboutToClose()=0;
public:
    Server(QHostAddress ip,short port);
};

#endif // SERVER_H
