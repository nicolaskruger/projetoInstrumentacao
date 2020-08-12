#include "mainw.h"
#include "testetcp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainW w;
    testeTcp t;
    //w.show();
    t.show();
    return a.exec();
}
