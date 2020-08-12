#include "facede.h"

void Facede::informLog(QString str)
{
    qDebug()<<str;
}

void Facede::setNivel(QString str)
{
    if(str.toInt() || str=="0")
        nivel.setCurrNivel(str.toInt());
}

Nivel *Facede::getNivel()
{
    return &nivel;
}

Facede::Facede(QObject *parent) : QObject(parent)
{
    serv = new ServerWater(ip,port);

    connect(serv,SIGNAL(succesStart()),this,SLOT(sucsses()));
    connect(serv,SIGNAL(erroStart()),this,SLOT(fail()));
    connect(serv,SIGNAL(response(QString)),this,SLOT(informLog(QString)));
    connect(serv,SIGNAL(response(QString)),this,SLOT(setNivel(QString)));
    connect(serv,SIGNAL(acceptConnect(QString)),this,SLOT(informLog(QString)));
    connect(serv,SIGNAL(disconetMsg(QString)),this,SLOT(informLog(QString)));

    serv->startServer();
}
