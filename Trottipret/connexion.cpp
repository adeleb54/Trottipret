#include "connexion.h"
#include "ui_connexion.h"
#include "inscription.h"
#include "moncompte.h"

/**
 * @authors Roberge-Mentec Corentin, Vernevaut Corentin, Barbier Adèle
 * Ajout de l'état de connexion d'un utilisateur
 */

/**
 * @brief Constructeur de la classe Connexion
 * @param parent le QWidget de la classe Connexion
 */
Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
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
QString Connexion::getMail(){
    return ui-> lineEdit_mail->text();
}

/**
 * @brief Récupère le mot de passe entré
 * @return QString le mot de passe au format QString
 */
QString Connexion::getMdp(){
    return ui->lineEdit_mdp->text();
}

/**
 * @brief Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
 */
void Connexion::verification(){
    if(gest.connexion(getMail(), getMdp())){
        is_connected = true;
        this->hide();
    }
}

/**
 * @brief Renvoie l'utilisateur sur la page d'inscription
 */
void Connexion::inscription(){
    Inscription inscription;
    inscription.exec();
}

/**
 * @brief Permet de savoir si un utilisateur s'est connecté à l'application ou non
 * @return l'état de la connexion d'un utilisateur
 */
bool Connexion::isConnected(){
    return is_connected;
}

/**
 * @brief Ferme l'application
 */
void Connexion::close(){
    std::cout << "Fermeture de l'application" << std::endl;
}

/**
 * @brief Détruit l'objet Inscription
 */
Connexion::~Connexion()
{
    delete ui;
}
