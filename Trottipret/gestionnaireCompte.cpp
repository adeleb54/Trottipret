#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"
#include <iostream>

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
    string nom = getNom();
    string mdp = getMdp();
    string mdpConfirmation = getMdpConfirmation();
    string adresse = getAdresse();

    if (nom.empty() || mdp.empty() || mdpConfirmation.empty() || adresse.empty()){
        cout << "Erreur tous les champs ne sont pas rempli" << endl;
    }
    if (mdp != mdpConfirmation){
        cout << "Erreur le mdp et le mdp de onfirmation sont différents" << endl;
    }
}

GestionnaireCompte::~GestionnaireCompte()
{
    delete ui;
}



