#ifndef FACEDE_H
#define FACEDE_H

#include <QObject>
#include "serverwater.h"
#include "nivel.h"
#include <QDebug>

class Facede : public QObject
{
    Q_OBJECT
protected:
    const QHostAddress ip=QHostAddress::Any;
    const short port=4242;
    ServerWater* serv;
    Nivel nivel;
public slots:
    void informLog(QString info);
    void sucsses() {informLog("succes");}
    void fail() {informLog("fail");}
    void setNivel(QString str);
public:
    Nivel* getNivel();
    explicit Facede(QObject *parent = nullptr);

signals:

};

#endif // FACEDE_H
