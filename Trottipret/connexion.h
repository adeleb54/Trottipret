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
    /*getMail();
    getMdp();*/
    ~Connexion();


private slots:
    void on_LinkButton_inscription_clicked();

private:
    Ui::Connexion *ui;

/*private slots:
    void verification();*/
};

#endif // CONNEXION_H
