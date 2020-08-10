#include "nivel.h"
#include "ui_nivel.h"

Nivel::Nivel(QWidget *parent, int maxNivel) :
    QWidget(parent),
    ui(new Ui::Nivel)
{
    ui->setupUi(this);
    pb = ui->progressBar;
    le = ui->label;
    cv = new conveHigth();
    setCurrNivel(min);
    setMaxN(maxNivel);
    pb->setMinimum(min);
}

Nivel::~Nivel()
{
    delete ui;
    delete cv;
}

void Nivel::setMaxN(int n)
{
    pb->setMaximum(n);
}

void Nivel::setCurrNivel(int n)
{
    pb->setValue(n);
    le->setText(cv->conv(n));
}
