#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"

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
    return str = ui->textNom->text();
}

string GestionnaireCompte::getMdp(){
    return str = ui->textMdp->text();
}

string GestionnaireCompte::getMdpConfirmation(){
    return str = ui->textMdp_2->text();
}

string GestionnaireCompte::getAdresse(){
    return str = ui->textAdresse->text();
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



