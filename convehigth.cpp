#include "convehigth.h"

conveHigth::conveHigth(QHostAddress ip, short port)
{
    this->ip=ip;
    this->port=port;
}

bool conveHigth::startServer()
{
    if(server.listen(ip,port)){
        startServerSuccess();
        return true;
    }
    startServerSuccess();
    return false;
}

conveHigth::~conveHigth()
{

}



QString conveHigth::conv(int n)
{
       return QString::number(n)+" cm";
}
