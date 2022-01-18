#include "taschenrechner.h"
#include <QApplication>
#include "ui_taschenrechner.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Taschenrechner w;

    w.show();

    return a.exec();
}
