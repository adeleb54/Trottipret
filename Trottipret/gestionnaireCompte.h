#ifndef GESTIONNAIRECOMPTE_H
#define GESTIONNAIRECOMPTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>
#include <iostream>
#include <QtSql>


namespace Ui {
class GestionnaireCompte;
}
/**
 * @brief GestionnaireCompte::GestionnaireCompte Le constructeur de l'objet GestionnaireCompte
 */
class GestionnaireCompte
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;
    int id = 0;
public:
    explicit GestionnaireCompte();
    /**
     * @brief GestionnaireCompte::inscription Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est inscrit. Sinon il doit de nouveau entrer les champs
     * @param nom Nom entré par l'utilisateur
     * @param mdp Mot de passe entré par l'utilisateur
     * @param mdpConfirmation Confirmation du mot de passe entrée par l'utilisateur
     * @param mail Adresse mail entrée par l'utilisateur
     */
    void inscription(QString nom, QString mdp, QString mdpConfirmation, QString mail);

    /**
     * @brief GestionnaireCompte::connexion Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
     * @param mail Adresse mail entrée par l'utilisateur
     * @param mdp Mot de passe entré par l'utilisateur
     */
    void connexion(QString mail, QString mdp);

    /**
     * @brief GestionnaireCompte::~GestionnaireCompteDétruit l'obej GesstionnaireDeCompte
     */
    ~GestionnaireCompte();

};


#endif // GESTIONNAIRECOMPTE_H
