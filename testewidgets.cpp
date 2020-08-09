#include "testewidgets.h"
#include "ui_testewidgets.h"

TesteWidgets::TesteWidgets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TesteWidgets)
{
    ui->setupUi(this);
}

TesteWidgets::~TesteWidgets()
{
    delete ui;
}

QVBoxLayout *TesteWidgets::getVbox()
{
    return ui->verticalLayout;
}
