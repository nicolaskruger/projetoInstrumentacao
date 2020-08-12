#include "mainw.h"
#include "ui_mainw.h"

MainW::MainW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainW)
{
    ui->setupUi(this);
    n = fac.getNivel();
    ui->horizontalLayout->addWidget(n);
}

MainW::~MainW()
{
    delete ui;
}
