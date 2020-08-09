#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QVector>
#include <QString>
#include <QLineEdit>
#include <QProgressBar>
#include <testewidgets.h>
#include <QPushButton>
#include <dialog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();


private:
    void setText(int n,QString str);
    QVector<QLineEdit*> vet;
    QProgressBar* p;
    Ui::MainWindow *ui;
    QTcpSocket _socket;
    TesteWidgets* teste;
    QPushButton b;
    Dialog* d;
};
#endif // MAINWINDOW_H
