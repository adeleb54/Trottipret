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
<<<<<<< Updated upstream:Trottipret/annonceFen.cpp
AnnonceFen::AnnonceFen(QWidget *parent) :
=======
AjouterAnnonce::AjouterAnnonce(GestionnaireAnnonce gestAnnonce, QWidget *parent) :
>>>>>>> Stashed changes:Trottipret/ajouterannonce.cpp
    QDialog(parent),
    ui(new Ui::AnnonceFen)
{
    this->gestAnnonce = gestAnnonce;
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
 * @return La date de fin locfalseation entrée par l'utilisateur
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
    bool electrique = isChecked();

    gestAnnonce.ajouterAnnonce(nom, description, retrait, retour, taille, electrique, prix, dateDebLoca, dateFinLoca, heureDebLoca, heureFinLoca);
}

/**
 * @brief Méthode permettant de revenir au menu principal de l'application
 */
void AjouterAnnonce::retour(){
    this->close();
}

AnnonceFen::~AnnonceFen()
{
    delete ui;
}
