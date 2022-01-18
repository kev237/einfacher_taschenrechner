#ifndef TASCHENRECHNER_H
#define TASCHENRECHNER_H

#include <QMainWindow>


namespace Ui {
class Taschenrechner;
}

class Taschenrechner : public QMainWindow
{
    Q_OBJECT

public:
    explicit Taschenrechner(QWidget *parent = 0);
    ~Taschenrechner();

public slots:
void on_operation_clicked();
void on_reset_clicked();


private:
    Ui::Taschenrechner *ui;
};

#endif // TASCHENRECHNER_H
