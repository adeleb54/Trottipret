#include "gestionnaireCompte.h"
#include "inscription.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inscription inscrpt;
    /*GestionnaireCompte gestCompte;
    gestCompte.show();*/
    inscrpt.show();

    return a.exec();
}
