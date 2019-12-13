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
    void ajouterAnnonce(QString nom, QString description, QString retrait, QString retour, int taille, bool electrique, double prix, QDate dateDeb, QDate dateFin, QTime heureDeb, QTime heureFin);
private:
    int idTrot;
    int idAnnonce;
};

#endif // GESTIONNAIREANNONCE_H
