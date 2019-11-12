#include "trottipret.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Trottipret w;
    w.show();

    return a.exec();
}
