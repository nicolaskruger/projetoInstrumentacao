#include "serveg.h"

void ServeG::startServer()
{
    bool status = server.listen(ip,port);
    if(status){
        emit succesStart();
    }else{
        emit erroStart();
    }
}

ServeG::ServeG(QHostAddress ip, short port)
{
    this->ip=ip;
    this->port = port;
}
