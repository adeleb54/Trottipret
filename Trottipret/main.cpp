#include "gestionnaireCompte.h"
#include "inscription.h"
#include "connexion.h"
#include "connexiondb.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnexionDB connexionDB;

    Connexion connect;
    connect.show();

    return a.exec();
}
