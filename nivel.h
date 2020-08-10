#ifndef NIVEL_H
#define NIVEL_H

#include <QWidget>
#include <QProgressBar>
#include <QLineEdit>
#include <QLabel>
#include "convehigth.h"


namespace Ui {
class Nivel;
}

class Nivel : public QWidget
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr,int maxNivel=100);
    ~Nivel();
    void setMaxN(int n);
    void setCurrNivel(int n);
private:
    const int min=0;
    Ui::Nivel *ui;
    QProgressBar *pb;
    QLabel * le;
    convert* cv;
};

#endif // NIVEL_H
