#include "PrincipaleFen.h"
#include "ui_principaleFen.h"
#include "connexionUtilisateurFen.h"
#include "compteUtilisateurFen.h"
#include "annonceFen.h"

using namespace std;
/**
 * @author Roberge-Mentec Corentin
 */

/**
 * @brief Constructeur de la classe Trottipret
 * @param parent le QWidget de la classe Trottipret
 */
PrincipaleFen::PrincipaleFen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrincipaleFen)
{
    ui->setupUi(this);
    QObject::connect(ui->monCompte, SIGNAL(clicked()), this, SLOT(monCompte()));
    QObject::connect(ui->ajouterAnnonce, SIGNAL(triggered(bool)), this, SLOT(ajouterAnnonce()));
}

/**
 * @brief Lancement de l'application Trottipret
 */
void PrincipaleFen::executer(){
    this->hide();
<<<<<<< Updated upstream:Trottipret/principaleFen.cpp
    ConnexionUtilisateurFen connexion(gest);
=======
    Connexion connexion(gestCompte);
>>>>>>> Stashed changes:Trottipret/trottipret.cpp
    connexion.exec();
    if(connexion.isConnected()){
        this->show();
        id = connexion.getId();
        cout << gestCompte.getAdresse(id).toStdString() << endl;
        cout << id << endl;
    }else{
        this->~PrincipaleFen();
    }

}

/**
 * @brief Méthode d'accès au compte utilisateur de Trottipret
 */
void PrincipaleFen::monCompte(){
    CompteUtilisateurFen monCompte(id);
    this->hide();
    monCompte.exec();
    this->show();
}

/**
 * @brief Lance la fenêtre d'ajout d'annonce
 */
<<<<<<< Updated upstream:Trottipret/principaleFen.cpp
void PrincipaleFen::ajouterAnnonce(){
    AnnonceFen annonceFen;
    annonceFen.exec();
=======
void Trottipret::ajouterAnnonce(){
    AjouterAnnonce ajoutAnnonce(gestAnnonce);
    ajoutAnnonce.exec();
>>>>>>> Stashed changes:Trottipret/trottipret.cpp
}

/**
 * @brief Permet d'accéder à l'id de l'utilisateur actuel de l'application
 * @return l'id de l'utilisateur
 */
int Trottipret::getId(){
    return id;
}

/**
 * @brief Destructeur de l'objet Trottipret
 */
PrincipaleFen::~PrincipaleFen()
{
    delete ui;
}
