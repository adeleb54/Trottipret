#include "gestionnaireCompte.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GestionnaireCompte gestCompte;
    gestCompte.show();

    return a.exec();
}
