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

class Connexion : public QDialog
{
    Q_OBJECT
    GestionnaireCompte gest;

public:
    explicit Connexion(QWidget *parent = 0);
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
     * @brief Détruit l'objet Inscription
     */
    ~Connexion();

private:
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
     * @brief ferme l'application
     */
    void close();
};

#endif // CONNEXION_H
