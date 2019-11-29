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

class GestionnaireCompte
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    int id = 0;
public:
    explicit GestionnaireCompte();
    void verification(QString nom, QString mdp, QString mdpConfirmation, QString mail);
    ~GestionnaireCompte();

};


#endif // GESTIONNAIRECOMPTE_H
