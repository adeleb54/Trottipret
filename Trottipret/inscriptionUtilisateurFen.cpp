#include "inscriptionUtilisateurFen.h"
#include "ui_inscriptionUtilisateurFen.h"

/**
  * @author Roberge-Mentec Corentin, Vernevaut Corentin
  */

/**
 * @brief Constructeur de la classe Inscription
 * @param parent le QWidget de la classe Inscription
 */
InscriptionUtilisateurFen::InscriptionUtilisateurFen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InscriptionUtilisateurFen)
{
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit ::Password);
    ui ->lineEdit_confirmMdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->button_valider, SIGNAL(clicked()), this, SLOT(verification()));
}

/**
 * @brief Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est inscrit. Sinon il doit de nouveau entrer les champs
 */
void InscriptionUtilisateurFen::verification() {
   if (gest.inscription(getNom(), getMdp(), getMdpConfirmation(), getAdresse())){
       is_register = true;
       this->hide();
   }
}

/**
 * @brief Récupère le nom entré
 * @return QString le nom au format QString
 */
QString InscriptionUtilisateurFen::getNom(){
    return ui->lineEdit_nom->text();
}

/**
 * @brief Récupère le mot de passe entré
 * @return QString le mot de passe au format QString
 */
QString InscriptionUtilisateurFen::getMdp(){
    return ui->lineEdit_mdp->text();
}

/**
 * @brief Récupère la confirmation du mot de passe entré
 * @return QString la confirmation du mot de passe au format QString
 */
QString InscriptionUtilisateurFen::getMdpConfirmation(){
    return ui->lineEdit_confirmMdp->text();
}

/**
 * @brief Récupère l'adresse mail entrée
 * @return QString l'adresse mail entrée au format QString
 */
QString InscriptionUtilisateurFen::getAdresse(){
    return ui->lineEdit_mail->text();
}

/**
 * @brief Permet de savoir si un utilisateur s'est inscrit à l'application ou non
 * @return l'état d'inscription d'un utilisateur
 */
bool InscriptionUtilisateurFen::isRegister(){
    return is_register;
}

/**
 * @brief Détruit l'objet Inscription
 */
InscriptionUtilisateurFen::~InscriptionUtilisateurFen()
{
    delete ui;
}
