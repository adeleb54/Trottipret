#ifndef AJOUTERANNONCE_H
#define AJOUTERANNONCE_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <string.h>
#include "creerannonce.h"
#include "ajouterannonce.h"

namespace Ui {
class AjouterAnnonce;
}

/**
 * @brief La classe AjouterAnnonce
 */
class AjouterAnnonce : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Le constructeur de la classe AjouterAnnonce
     * @param parent le QWidget de la classe AjouterAnnonce
     */
    explicit AjouterAnnonce(QWidget *parent = 0);

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


    ~AjouterAnnonce();

private slots:

    /**
     * @brief Méthode permettant de vérifier les données entrées par l'utilisateur
     * et valider l'ajout de l'annonce
     */
    void validation();

private:
    Ui::AjouterAnnonce *ui;
};

#endif // AJOUTERANNONCE_H
