#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>
#include <iostream>
#include "gestionnaireCompte.h"

/**
 * @author Barbier Adèle
 */
namespace Ui {
class Connexion;
}

/**
 * @brief La classe Connexion
 */
class Connexion : public QDialog
{
    Q_OBJECT


public:
    /**
     * @brief Constructeur de la classe Connexion
     * @param parent le QWidget de la classe Connexion
     */
    explicit Connexion(GestionnaireCompte gest, QWidget *parent = 0);
    /**
     * @brief Récupère l'adresse mail entrée
     * @return QString l'adresse mail entrée
     */
    QString getMail();

    /**
     * @brief Récupère le mot de passe entré
     * @return QString le mot de passe
     */
    QString getMdp();

    /**
     * @brief Retourne l'identifiant de l'utilisateur actuellement connecté
     * @return l'identifiant de l'utilisateur
     */
    int getId();


    /**
     * @brief Retourne le booléen permettant de savoir si de l'utilisateur est connecté ou non
     * @return l'état de connexion de l'utilisateur
     */
    bool isConnected();

    /**
     * @brief Détruit l'objet Inscription
     */
    ~Connexion();

private:
    GestionnaireCompte gest;
    bool is_connected;
    int id;
    Ui::Connexion *ui;

private slots:
    /**
     * @brief Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
     */
    void verification();

    /**
     * @brief Renvoie l'utilisateur sur la page d'inscription
     */
    void inscription();

    /**
     * @brief Ferme l'application
     */
    void close();
};

#endif // CONNEXION_H
