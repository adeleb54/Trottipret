#ifndef AJOUTERANNONCE_H
#define AJOUTERANNONCE_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <string.h>
<<<<<<< Updated upstream:Trottipret/annonceFen.h
#include "creerannonce.h"
=======
#include "gestionnaireannonce.h"
>>>>>>> Stashed changes:Trottipret/ajouterannonce.h

namespace Ui {
class AnnonceFen;
}

/**
 * @brief La classe AjouterAnnonce
 */
class AnnonceFen : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Le constructeur de la classe AjouterAnnonce
     * @param parent le QWidget de la classe AjouterAnnonce
     */
<<<<<<< Updated upstream:Trottipret/annonceFen.h
    explicit AnnonceFen(QWidget *parent = 0);
=======
    explicit AjouterAnnonce(GestionnaireAnnonce gestAnnonce, QWidget *parent = 0);
>>>>>>> Stashed changes:Trottipret/ajouterannonce.h

    /**
     * @brief Permet d'accéder au nom de la trottinette entré par l'utilisateur
     * @return Le nom de la trottinette entré par l'ordinateur
     */
    QString getNom();

    /**
     * @brief Permet d'accéder à la taille de la trottinette entrée par l'utilisateur
     * @return La taille de la trottinette entrée par l'utilisateur
     */
    int getTaille();

    /**
     * @brief Permet de savoir si la checkbox a été cochée ou non par l'utilisateur
     * @return L'état de la checkbox
     */
    bool isChecked();

    /**
     * @brief Permet d'accéder à la description entrée par l'utilisateur
     * @return La description entrée par l'utilisateur
     */
    QString getDescription();

    /**
     * @brief Permet d'accéder au prix entré par l'utilisateur
     * @return Le prix entré par l'utilisateur
     */
    double getPrix();

    /**
     * @brief Permet d'accéder au lieu de retrait entré par l'utilisateur
     * @return Le lieu de retrait entré par l'utilisateur
     */
    QString lieuRetrait();

    /**
     * @brief Permet d'accéder au lieu de retour entré par l'utilisateur
     * @return Le lieu de retrait entré par l'utilisateur
     */
    QString lieuRetour();

    /**
     * @brief Permet d'accéder à la date de début de location entrée par l'utilisateur
     * @return La date de début location entrée par l'utilisateur
     */
    QDate dateDeb();

    /**
     * @brief Permet d'accéder à l'heure de début de location entrée par l'utilisateur
     * @return L'heure de début location entrée par l'utilisateur
     */
    QTime heureDeb();

    /**
     * @brief Permet d'accéder à la date de fin de location entrée par l'utilisateur
     * @return La date de fin location entrée par l'utilisateur
     */
    QDate dateFin();

    /**
     * @brief Permet d'accéder à l'heure de fin de location entrée par l'utilisateur
     * @return L'heure de fin location entrée par l'utilisateur
     */
    QTime heureFin();

<<<<<<< Updated upstream:Trottipret/annonceFen.h

    ~AnnonceFen();
=======
    ~AjouterAnnonce();
>>>>>>> Stashed changes:Trottipret/ajouterannonce.h

private slots:

    /**
     * @brief Méthode permettant de vérifier les données entrées par l'utilisateur
     * et valider l'ajout de l'annonce
     */
    void validation();

    /**
     * @brief Méthode permettant de revenir au menu principal de l'application
     */
    void retour();

private:
<<<<<<< Updated upstream:Trottipret/annonceFen.h
    Ui::AnnonceFen *ui;
=======
    Ui::AjouterAnnonce *ui;
    GestionnaireAnnonce gestAnnonce;
>>>>>>> Stashed changes:Trottipret/ajouterannonce.h
};

#endif // AJOUTERANNONCE_H
