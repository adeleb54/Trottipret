#ifndef CREERANNONCE_H
#define CREERANNONCE_H

#include <iostream>
#include <string>
#include <QString>
#include <QDate>
#include <QTime>
#include <QtSql>

class CreerAnnonce
{
public:

    /**
     * @brief Constructeur de la classe CreerAnnonce
     */
    CreerAnnonce();

    /**
     * @brief Méthode de création de l'annonce concernant une trottinette
     */
    void creationAnnonce(QString nom, QString description, QString retour, QString retrait, int taille, double prix, QDate dateDebLoca, QDate dateFinLoca, QTime heureDebLoca, QTime heureFinLoca);
};

#endif // CREERANNONCE_H
