#ifndef TESTEWIDGETS_H
#define TESTEWIDGETS_H

#include <QWidget>
#include <QVBoxLayout>

namespace Ui {
class TesteWidgets;
}

class TesteWidgets : public QWidget
{
    Q_OBJECT

public:
    explicit TesteWidgets(QWidget *parent = nullptr);
    ~TesteWidgets();
    QVBoxLayout* getVbox();
    Ui::TesteWidgets *ui;
};

#endif // TESTEWIDGETS_H
