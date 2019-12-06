#include "gestionnaireCompte.h"
#include "inscription.h"
#include "connexion.h"
#include "connexiondb.h"
#include <QApplication>
#include "trottipretfenprincipale.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnexionDB connexionDB;

    TrottipretFenPrincipale fenPrincipale;
    fenPrincipale.show();


    return a.exec();
}
