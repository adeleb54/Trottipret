//#include "connexion.h"
#include "trottipret.h"
#include "connexiondb.h"
#include <QApplication>

/**
 * @author Barbier Adèle
 * Modification de la fenêtre principale
 */

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnexionDB connexionDB;

    Trottipret trottipret;
    trottipret.executer();

    return a.exec();
}
