#ifndef TESTETCP_H
#define TESTETCP_H

#include <QMainWindow>
#include "serverwater.h"
#include <QLabel>

namespace Ui {
class testeTcp;
}

class testeTcp : public QMainWindow
{
    Q_OBJECT

public:
    static QLabel* label;
    explicit testeTcp(QWidget *parent = nullptr);
    ~testeTcp();
private slots:
    void sucsses();
    void fail();
    void on_pushButton_clicked();
    void resp(QString str);
    void disc(QString msg);
    void conn(QString msg);
private:
    ServerWater* serv;
    Ui::testeTcp *ui;
};

#endif // TESTETCP_H
