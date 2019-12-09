#include "moncompte.h"
#include "ui_moncompte.h"

/**
 * @authors Roberge-Mentec Corentin, Barbier Adèle
 */

using namespace std;

/**
 * @brief Constructeur de la classe MonCompte
 * @param parent le QWidget de la classe MonCompte
 */
MonCompte::MonCompte(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MonCompte)
{
    ui->setupUi(this);
    this->id = id;
    ui->nomChamps->setText(gest.getNom(id));
    cout << gest.getNom(id).toStdString() << endl;
    //ui->mailChamps->setText(gest.getAdresse(id));
    QMessageBox alert;
    alert.setText(gest.getAdresse(id));
    //alert.exec();

    QObject::connect(ui->enregistrer, SIGNAL(clicked()), this, SLOT(verification()));
    QObject::connect(ui->retour, SIGNAL(clicked()), this, SLOT(retour()));
}


/**
 * @brief verification des informations à modifier
 */
void MonCompte::verification(){
    if (ui->ancienMdpChamps->text() != "" && ui->nouveauMdpChamps->text() != "" && ui->confirmationNouveauMDp->text() != ""){
        cout << "modification prise en compte oui" << endl;
    }else{
        cout << "Hé dis dont t'as pas tout rempli enculé·e" << endl;
    }
}

/**
 * @brief Méthode de retour vers la page d'accueil
 */
void MonCompte::retour(){
    this->close();
}

/**
 * @brief Permet d'accéder au nom entré par l'utilisateur
 * @return le nom entré par l'utilisateur
 */
QString MonCompte::getNom(){
    return ui->nomChamps->text();
}

/**
 * @brief Permet d'accéder au mail entré par l'utilisateur
 * @return le mail entré par l'utilisateur
 */
QString MonCompte::getMail(){
    return ui->mailChamps->text();
}

/**
 * @brief Permet d'accéder à l'ancien mot de passe entré par l'utilisateur
 * @return l'ancien mot de passe de l'utilisateur
 */
QString MonCompte::getAncienMdp(){
    return ui->ancienMdpChamps->text();
}

/**
 * @brief Permet d'accéder au nouveau mot de passe entré par l'utilisateur
 * @return le nouveau mot de passe de l'utilisateur
 */
QString MonCompte::getMdp(){
    return ui->nouveauMdpChamps->text();
}

/**
 * @brief Permet d'accéder au mot de passe de confirmation entré par l'utilisateur
 * @return le mot de passe de confirmation de l'utilisateur
 */
QString MonCompte::getMdpConfirmationMdp(){
    return ui->confirmationNouveauMDp->text();
}

/**
 * @brief setId Initialisation de l'identifiant de l'utilisateur connecté
 * @param id L'identifiant
 */
void MonCompte::setId(int id){
    this->id=id;
}

/**
 * @brief Destructeur de l'objet MonCompte
 */
MonCompte::~MonCompte()
{
    delete ui;
}
