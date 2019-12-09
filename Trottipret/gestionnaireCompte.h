#ifndef GESTIONNAIRECOMPTE_H
#define GESTIONNAIRECOMPTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>
#include <iostream>
#include <QtSql>

/**
 * @authors Barbier Adèle, Vernevaut Corentin, Roberge-Mentec Corentin
 */

namespace Ui {
class GestionnaireCompte;
}
/**
 * @brief La classe GestionnaireCompte
 */
class GestionnaireCompte
{
public:
    /**
     * @brief GestionnaireCompte::GestionnaireCompte Le constructeur de l'objet GestionnaireCompte
     */
    explicit GestionnaireCompte();
    /**
     * @brief inscription Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est inscrit. Sinon il doit de nouveau entrer les champs
     * @param nom Nom entré par l'utilisateur
     * @param mdp Mot de passe entré par l'utilisateur
     * @param mdpConfirmation Confirmation du mot de passe entrée par l'utilisateur
     * @param mail Adresse mail entrée par l'utilisateur
     */
    bool inscription(QString nom, QString mdp, QString mdpConfirmation, QString mail);

    /**
     * @brief connexion Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
     * @param mail Adresse mail entrée par l'utilisateur
     * @param mdp Mot de passe entré par l'utilisateur
     */
    bool connexion(QString mail, QString mdp);

    /**
     * @brief getId Retourne l'identifiant de l'utilisateur actuellement connecté
     * @return l'identifiant unique de l'utilisateur
     */
    int getId();

    /**
     * @brief getNom Retourne le nom associé à l'identifiant donné
     * @param id Identifiant de l'utilisateur
     * @return Le nom de l'utilisateur
     */
    QString getNom(int id);

    /**
     * @brief getAdresse Retourne l'adresse mail associée à l'identifiant donné
     * @param id Identifiant de l'utilisateur
     * @return L'adresse mail de l'utilisateur
     */
    QString getAdresse(int id);

    /**
     * @brief getMdp Retourne le mot de passe chiffré associé à l'identifiant donné
     * @param id Identifiant de l'utilisateur
     * @return Le mot de passe chiffré de l'utilisateur
     */
    QString getMdp(int id);

    void setMail(QString mailParam);

private :
    QSqlQuery query;
    int id = 0;
    QString mail;
};


#endif // GESTIONNAIRECOMPTE_H
