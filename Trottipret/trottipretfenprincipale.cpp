#include "trottipretfenprincipale.h"

TrottipretFenPrincipale::TrottipretFenPrincipale()
{
    QMenu *menuUtilisateur = menuBar()->addMenu("&Utilisateur");
    QAction *actionConnexion = new QAction("&Connexion", this);
    QAction *actionInscription = new QAction("&Inscription", this);
    menuUtilisateur->addAction(actionConnexion);
    menuUtilisateur->addAction(actionInscription);
}
