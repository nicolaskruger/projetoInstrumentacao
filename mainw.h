#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#include "facede.h"


namespace Ui {
class MainW;
}

class MainW : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainW(QWidget *parent = nullptr);
    ~MainW();
private:
    Ui::MainW *ui;
    Facede fac;
    Nivel* n;
};

#endif // MAINW_H
