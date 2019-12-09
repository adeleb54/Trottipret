#include "creerannonce.h"

using namespace std;

/**
 * @author Roberge-Mentec Corentin
 */

/**
 * @brief Constructeur de la classe CreerAnnonce
 */
CreerAnnonce::CreerAnnonce()
{

}

/**
 * @brief Méthode de création de l'annonce concernant une trottinette
 */
void CreerAnnonce::creationAnnonce(QString nom, QString description, QString retour, QString retrait, int taille, double prix, QDate dateDebLoca, QDate dateFinLoca, QTime heureDebLoca, QTime heureFinLoca){
    /*QSqlQuery query;
    query.prepare("INSERT INTO Trottinette(idTrot, nom, , mdp, notation) VALUES (:iduser, :nom, :mail, :mdp, :notation);");
    query.bindValue(":iduser", id);
    query.bindValue(":nom", nom);
    query.bindValue(":mail", mail);
    query.bindValue(":mdp", mdpHash.toHex());
    query.bindValue(":notation", 5);
    query.exec();
    query.finish();*/
}
