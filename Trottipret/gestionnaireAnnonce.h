#ifndef GESTIONNAIREANNONCE_H
#define GESTIONNAIREANNONCE_H

#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>
#include <iostream>
#include <QtSql>

class GestionnaireAnnonce
{
public:
    GestionnaireAnnonce();
    void ajoutTrottinette(QString nom, QString description, QString retour, QString retrait, int taille, double prix, QDate dateDebLoca, QDate dateFinLoca, QTime heureDebLoca, QTime heureFinLoca);
};

#endif // GESTIONNAIREANNONCE_H
