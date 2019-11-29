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
    QString getNom();
    QString getMdp();
    QString getMdpConfirmation();
    QString getAdresse();
    ~Inscription();

private:
    Ui::Inscription *ui;

private slots:
    void verification();
};

#endif // INSCRIPTION_H
