//#include "connexion.h"
#include "PrincipaleFen.h"
#include "connexiondb.h"
#include <QApplication>
#include "trottipretfenprincipale.h"

/**
 * @author Barbier Adèle
 * Modification de la fenêtre principale
 */

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnexionDB connexionDB;

    PrincipaleFen trottipret;
    trottipret.executer();

    return a.exec();
}
