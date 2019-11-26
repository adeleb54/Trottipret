#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"
#include "utilisateur.h"
#include <iostream>
#include <QMessageBox>

using namespace std;

GestionnaireCompte::GestionnaireCompte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionnaireCompte){
    ui->setupUi(this);
    ui->textMdp->setEchoMode(QLineEdit ::Password);
    ui ->textMdp_2->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(verification()));
}

string GestionnaireCompte::getNom(){
    return ui->textNom->text().toStdString();
}

string GestionnaireCompte::getMdp(){
    return ui->textMdp->text().toStdString();
}

string GestionnaireCompte::getMdpConfirmation(){
    return ui->textMdp_2->text().toStdString();
}

string GestionnaireCompte::getAdresse(){
    return ui->textAdresse->text().toStdString();
}

void GestionnaireCompte::verification(){
    QMessageBox alert;
    string nom = getNom();
    string mdp = getMdp();
    string mdpConfirmation = getMdpConfirmation();
    string adresse = getAdresse();

    if (nom.empty() || mdp.empty() || mdpConfirmation.empty() || adresse.empty()){
        alert.setText("Erreur tous les champs ne sont pas rempli");
        alert.exec();
    }else if (mdp != mdpConfirmation){
        alert.setText("Erreur le mdp et le mdp de onfirmation sont différents");
        alert.exec();
    }else{
        Utilisateur user(nom, adresse, mdp);
    }
}

GestionnaireCompte::~GestionnaireCompte()
{
    delete ui;
}



