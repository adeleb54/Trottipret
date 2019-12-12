#include "compteUtilisateurFen.h"
#include "ui_compteUtilisateurFen.h"

/**
 * @authors Roberge-Mentec Corentin, Barbier Adèle
 */

using namespace std;

/**
 * @brief Constructeur de la classe MonCompte
 * @param parent le QWidget de la classe MonCompte
 */
CompteUtilisateurFen::CompteUtilisateurFen(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompteUtilisateurFen)
{
    ui->setupUi(this);
    this->id = id;
    const QString& mail = gest.getAdresse(id);
    const QString& nom = gest.getNom(id);
    ui->mailChamps->setText(mail);
    ui->nomChamps->setText(nom);

    QObject::connect(ui->enregistrer, SIGNAL(clicked()), this, SLOT(verification()));
    QObject::connect(ui->retour, SIGNAL(clicked()), this, SLOT(retour()));
    QObject::connect(ui->supprimer, SIGNAL(clicked()), this, SLOT(supprimer()));
}


/**
 * @brief verification des informations à modifier
 */
void CompteUtilisateurFen::verification(){
    if (ui->ancienMdpChamps->text() != "" && ui->nouveauMdpChamps->text() != "" && ui->confirmationNouveauMDp->text() != ""){
<<<<<<< HEAD
        cout << "modification prise en compte" << endl;
    }else{
        cout << "Tout les champs de mot de passe ne sont pas remplis!" << endl;
=======
        cout << "Modification prise en compte" << endl;
    }else{
        cout << "Veuillez remplir tous les champs pour modifier le mot de passe" << endl;
>>>>>>> 96c11dfd8e1aac70246875b5a94678f0e422d78a
    }
}

/**
 * @brief Méthode de retour vers la page d'accueil
 */
void CompteUtilisateurFen::retour(){
    this->close();
}

/**
 * @brief Permet d'accéder au nom entré par l'utilisateur
 * @return le nom entré par l'utilisateur
 */
QString CompteUtilisateurFen::getNom(){
    return ui->nomChamps->text();
}

/**
 * @brief Permet d'accéder au mail entré par l'utilisateur
 * @return le mail entré par l'utilisateur
 */
QString CompteUtilisateurFen::getMail(){
    return ui->mailChamps->text();
}

/**
 * @brief Permet d'accéder à l'ancien mot de passe entré par l'utilisateur
 * @return l'ancien mot de passe de l'utilisateur
 */
QString CompteUtilisateurFen::getAncienMdp(){
    return ui->ancienMdpChamps->text();
}

/**
 * @brief Permet d'accéder au nouveau mot de passe entré par l'utilisateur
 * @return le nouveau mot de passe de l'utilisateur
 */
QString CompteUtilisateurFen::getMdp(){
    return ui->nouveauMdpChamps->text();
}

/**
 * @brief Permet d'accéder au mot de passe de confirmation entré par l'utilisateur
 * @return le mot de passe de confirmation de l'utilisateur
 */
QString CompteUtilisateurFen::getMdpConfirmationMdp(){
    return ui->confirmationNouveauMDp->text();
}

/**
 * @brief setId Initialisation de l'identifiant de l'utilisateur connecté
 * @param id L'identifiant
 */
void CompteUtilisateurFen::setId(int id){
    this->id=id;
}

/**
 * @brief Suppression du compte
 */
void CompteUtilisateurFen::supprimer(){
    gest.supprimer(id);
    this->close();
}

/**
 * @brief Destructeur de l'objet MonCompte
 */
CompteUtilisateurFen::~CompteUtilisateurFen()
{
    delete ui;
}
