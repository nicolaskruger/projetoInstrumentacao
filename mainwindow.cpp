#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "ui_testewidgets.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      _socket(this)
{

    ui->setupUi(this);
    d=new Dialog(this);
    this->teste= new TesteWidgets();
    ui->verticalLayout_2->addWidget(teste);
    //((QLineEdit*)(ui->verticalLayout_2->itemAt(0)->widget()))->setText("oi");
    p = ui->progressBar;
    p->setRange(0,200);
    const int cont=ui->verticalLayout->count();
    for(int i =0; i<cont;i++){
        vet.append((QLineEdit*)(ui->verticalLayout->itemAt(i)->widget()));
        //ui->verticalLayout_2->addWidget(new (ui->verticalLayout->itemAt(i)->widget()));
    }
    const int cont2= teste->ui->verticalLayout->count();
    //ui->verticalLayout_2->addItem(teste);
    //ui->verticalLayout_2->addWidget(teste->ui->pushButton_2);
    //this->setLayout(teste->ui->verticalLayout);
    //setText(0,QString::number(p->maximum()));
    //setText(2,QString::number(p->minimum()));
}

MainWindow::~MainWindow()
{

    delete ui;
    delete  teste;
    delete d;

}




void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"foi";
    float f = ui->lineEdit->text().toFloat();
    ui->lineEdit->setText("");
    QProgressBar* p=ui->progressBar;
    p->setValue(f);
    setText(1,QString::number(p->value()));
    TesteWidgets t;
    d->show();
}

void MainWindow::setText(int n, QString str)
{
    try {
        vet[n]->setText(str);
    } catch (...) {

    }
}



