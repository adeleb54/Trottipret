#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QDialog>
#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>
#include <iostream>
#include "gestionnaireCompte.h"

namespace Ui {
class Inscription;
}

class Inscription : public QDialog
{
    Q_OBJECT
    GestionnaireCompte gest;

public:
    explicit Inscription(QWidget *parent = 0);
    /**
     * @brief Récupère le nom entré
     * @return QString le nom au format QString
     */
    QString getNom();
    /**
     * @brief Récupère le mot de passe entré
     * @return QString le mot de passe au format QString
     */
    QString getMdp();
    /**
     * @brief Récupère la confirmation du mot de passe entré
     * @return QString la confirmation du mot de passe au format QString
     */
    QString getMdpConfirmation();
    /**
     * @brief Récupère l'adresse mail entrée
     * @return QString l'adresse mail entrée au format QString
     */
    QString getAdresse();

    /**
     * @brief Détruit l'objet Inscription
     */
    ~Inscription();

private:
    Ui::Inscription *ui;

private slots:
    /**
     * @brief Demande vérification au gestionnaire de compte. Si tout est bon l'utilisateur est inscrit
     */
    void verification();
};

#endif // INSCRIPTION_H
