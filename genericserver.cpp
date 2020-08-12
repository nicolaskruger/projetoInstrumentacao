#include "genericserver.h"

bool genericServer::startServer()
{
    if(server.listen(ip,port)){
        startSuccses();
        return true;
    }else{
        startFail();
        return false;
    }
}


genericServer::genericServer(QHostAddress ip, short port)
{
    this->ip =ip;
    this->port =port;
    connect(&server, SIGNAL(newConnection()), this, SLOT(acceptTheConnection()));
}
