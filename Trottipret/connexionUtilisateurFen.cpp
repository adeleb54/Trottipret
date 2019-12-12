#include "connexionUtilisateurFen.h"
#include "inscription.h"
#include "ui_connexionUtilisateurFen.h"
#include "compteUtilisateurFen.h"

/**
 * @authors Roberge-Mentec Corentin, Vernevaut Corentin, Barbier Adèle
 * Ajout de l'état de connexion d'un utilisateur
 */

/**
 * @brief Constructeur de la classe ConnexionUtilisateurFen
 * @param parent le QWidget de la classe ConnexionUtilisateurFen
 */
ConnexionUtilisateurFen::ConnexionUtilisateurFen(GestionnaireCompte gest, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnexionUtilisateurFen)
{
    this->gest = gest;
    is_connected = false;
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->inscription, SIGNAL(clicked()), this, SLOT(inscription()));
    QObject::connect(ui->pushButton_connexion, SIGNAL(clicked()), this, SLOT(verification()));

}

/**
 * @brief Récupère l'adresse mail entrée
 * @return QString l'adresse mail entrée au format QString
 */
QString ConnexionUtilisateurFen::getMail(){
    return ui-> lineEdit_mail->text();
}

/**
 * @brief Récupère le mot de passe entré
 * @return QString le mot de passe au format QString
 */
QString ConnexionUtilisateurFen::getMdp(){
    return ui->lineEdit_mdp->text();
}

/**
 * @brief Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
 */
void ConnexionUtilisateurFen::verification(){

    if(gest.connexion(getMail(), getMdp())){
        is_connected = true;
        id=gest.getId();
        this->hide();
    }
}

/**
 * @brief Renvoie l'utilisateur sur la page d'inscription
 */
void ConnexionUtilisateurFen::inscription(){
    Inscription inscription;
    inscription.exec();
    if(inscription.isRegister()){
        this->show();
    }
}

/**
 * @brief Permet de savoir si un utilisateur s'est connecté à l'application ou non
 * @return l'état de la connexion d'un utilisateur
 */
bool ConnexionUtilisateurFen::isConnected(){
    return is_connected;
}

/**
 * @brief Ferme l'application
 */
void ConnexionUtilisateurFen::close(){
    std::cout << "Fermeture de l'application" << std::endl;
}

/**
 * @brief Retourne l'identifiant de l'utilisateur actuellement connecté
 * @return l'identifiant de l'utilisateur
 */
int ConnexionUtilisateurFen::getId(){
    return id;
}

/**
 * @brief Détruit l'objet Inscription
 */
ConnexionUtilisateurFen::~ConnexionUtilisateurFen()
{
    delete ui;
}
