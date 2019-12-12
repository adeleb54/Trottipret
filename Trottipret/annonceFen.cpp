#include "annonceFen.h"
#include "ui_annonceFen.h"

/**
  * @author Roberge-Mentec Corentin
  */

using namespace std;

/**
 * @brief Le constructeur de la classe AjouterAnnonce
 * @param parent le QWidget de la classe AjouterAnnonce
 */
AnnonceFen::AnnonceFen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnnonceFen)
{
    ui->setupUi(this);
    QObject::connect(ui->valider, SIGNAL(clicked()), this, SLOT(validation()));
}

/**
 * @brief Permet d'accéder au nom de la trottinette entré par l'utilisateur
 * @return Le nom de la trottinette entré par l'ordinateur
 */
QString AnnonceFen::getNom(){
    return ui->nom->text();
}

/**
 * @brief Permet d'accéder à la taille de la trottinette entrée par l'utilisateur
 * @return La taille de la trottinette entrée par l'utilisateur
 */
int AnnonceFen::getTaille(){
    return ui->taille->text().toInt(NULL, 10);
}

/**
 * @brief Permet de savoir si la checkbox a été cochée ou non par l'utilisateur
 * @return L'état de la checkbox
 */
bool AnnonceFen::isChecked(){
    return ui->checkBox->isChecked();
}

/**
 * @brief Permet d'accéder à la description entrée par l'utilisateur
 * @return La description entrée par l'utilisateur
 */
QString AnnonceFen::getDescription(){
    return ui->description->toPlainText();
}

/**
 * @brief Permet d'accéder au prix entré par l'utilisateur
 * @return Le prix entré par l'utilisateur
 */
double AnnonceFen::getPrix(){
    return ui->prix->text().toDouble(NULL);
}

/**
 * @brief Permet d'accéder au lieu de retrait entré par l'utilisateur
 * @return Le lieu de retrait entré par l'utilisateur
 */
QString AnnonceFen::lieuRetrait(){
    return ui->retrait->text();
}

/**
 * @brief Permet d'accéder au lieu de retour entré par l'utilisateur
 * @return Le lieu de retrait entré par l'utilisateur
 */
QString AnnonceFen::lieuRetour(){
    return ui->retour->text();
}

/**
 * @brief Permet d'accéder à la date de début de location entrée par l'utilisateur
 * @return La date de début location entrée par l'utilisateur
 */
QDate AnnonceFen::dateDeb(){
    return ui->dateDeb->date();
}

/**
 * @brief Permet d'accéder à l'heure de début de location entrée par l'utilisateur
 * @return L'heure de début location entrée par l'utilisateur
 */
QTime AnnonceFen::heureDeb(){
    return ui->heureDeb->time();
}

/**
 * @brief Permet d'accéder à la date de fin de location entrée par l'utilisateur
 * @return La date de fin location entrée par l'utilisateur
 */
QDate AnnonceFen::dateFin(){
    return ui->dateFin->date();
}

/**
 * @brief Permet d'accéder à l'heure de fin de location entrée par l'utilisateur
 * @return L'heure de fin location entrée par l'utilisateur
 */
QTime AnnonceFen::heureFin(){
    return ui->heureFin->time();
}

/**
 * @brief Méthode permettant de vérifier les données entrées par l'utilisateur
 * et valider l'ajout de l'annonce
 */
void AnnonceFen::validation(){
    QString nom = getNom(), description = getDescription(), retour = lieuRetour(), retrait = lieuRetrait();
    int taille = getTaille();
    double prix = getPrix();
    QDate dateDebLoca = dateDeb();
    QDate dateFinLoca = dateFin();
    QTime heureDebLoca = heureDeb(), heureFinLoca = heureFin();
    QMessageBox alert;

    if (taille < 60 || taille > 110){
        alert.setText("Erreur la taille de la trottinette doit être comprise entre 60cm et 110cm");
        alert.exec();
    }else if(prix <= 0 || prix >= 1000){
        alert.setText("Erreur le prix de la trottinette doit être compris entre 0€ (exclu) et 1000€ (exclu)");
        alert.exec();
    }else if (nom.toStdString() == ""){
        alert.setText("Erreur le nom de la trottinette doit être rempli");
        alert.exec();
    }else if (description.toStdString() == ""){
        alert.setText("Erreur la description de la trottinette doit être remplie");
        alert.exec();
    }else if (retrait.toStdString() == ""){
        alert.setText("Erreur le lieu de retrait de la trottinette doit être remplie");
        alert.exec();
    }else if(retour.toStdString() == ""){
        alert.setText("Erreur le lieu de retour de la trottinette doit être remplie");
        alert.exec();
    }else if(dateDebLoca >= dateFinLoca){
        alert.setText("Erreur la date de début de location de la trottinette doit être inférieure à celle de fin de location");
        alert.exec();
    }else{
        CreerAnnonce anonce;
        anonce.creationAnnonce(nom, description, retour, retrait, taille, prix, dateDebLoca, dateFinLoca, heureDebLoca, heureFinLoca);
    }

}

AnnonceFen::~AnnonceFen()
{
    delete ui;
}
