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

class GestionnaireCompte : public QMainWindow
{
    Q_OBJECT
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    int id = 0;
public:
    explicit GestionnaireCompte(QWidget *parent = 0);
    QString getNom();
    QString getMdp();
    QString getMdpConfirmation();
    QString getAdresse();
    ~GestionnaireCompte();

private:
    Ui::GestionnaireCompte *ui;

private slots:
    void verification();
};


#endif // GESTIONNAIRECOMPTE_H
