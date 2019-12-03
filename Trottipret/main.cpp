#include "gestionnaireCompte.h"
#include "inscription.h"
#include "connexion.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connexion connect;
    connect.show();

    return a.exec();
}
