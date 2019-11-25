#include "inscription.h"
#include "ui_inscription.h"
#include <iostream>
#include <string.h>

using namespace std;

Trottipret::Trottipret(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Trottipret)
{
    ui->setupUi(this);
    ui ->textMdp->setEchoMode(QLineEdit::Password);
    ui ->textMdp_2->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(verification()));
}

string Trottipret::getNom(){
    QString str = ui->textNom->text();
    return str.toStdString();
}

string Trottipret::getMdp(){
    QString str = ui->textMdp->text();
    return str.toStdString();
}

string Trottipret::getMdpConfirmation(){
    QString str = ui->textMdp_2->text();
    return str.toStdString();
}

string Trottipret::getAdresse(){
    QString str = ui->textAdresse->text();
    return str.toStdString();
}

void Trottipret::verification(){
    string nom = getNom();
    string mdp = getMdp();
    string mdpConfirmation = getMdpConfirmation();
    string adresse = getAdresse();

    if (nom.empty() || mdp.empty() || mdpConfirmation.empty() || adresse.empty()){
        cout << "Erreur tous les champs ne sont pas rempli" << endl;

    }
    if (mdp != mdpConfirmation){
        cout << "Erreur le mot de passe de confirmation n'est pas le bon" << endl;

    }
}

Trottipret::~Trottipret()
{
    delete ui;
}
