#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#include "nivel.h"
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
    Nivel* n;
};

#endif // MAINW_H
