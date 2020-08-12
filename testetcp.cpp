#include "testetcp.h"
#include "ui_testetcp.h"

QLabel* testeTcp::label=nullptr;

void teste(){

}

void testeTcp::sucsses()
{
    ui->label->setText("sucesso");
}

void testeTcp::fail()
{
    ui->label->setText("fracasso");
}


testeTcp::testeTcp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testeTcp)
{
    ui->setupUi(this);
    serv =new ServerWater(QHostAddress::Any);
    label= ui->label;
    connect(serv,SIGNAL(succesStart()),this,SLOT(sucsses()));
    connect(serv,SIGNAL(erroStart()),this,SLOT(fail()));
    connect(serv,SIGNAL(response(QString)),this,SLOT(resp(QString)));
    connect(serv,SIGNAL(acceptConnect(QString)),this,SLOT(resp(QString)));
    connect(serv,SIGNAL(disconetMsg(QString)),this,SLOT(conn(QString)));

}

testeTcp::~testeTcp()
{
    delete ui;
    delete serv;
}

void testeTcp::on_pushButton_clicked()
{
    serv->startServer();
}

void testeTcp::resp(QString str)
{
    ui->label_2->setText(str);
}

void testeTcp::disc(QString msg)
{
    ui->label_2->setText(msg);
}

void testeTcp::conn(QString msg)
{
    ui->label_2->setText(msg);
}
