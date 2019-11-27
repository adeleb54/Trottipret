#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"

using namespace std;

GestionnaireCompte::GestionnaireCompte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionnaireCompte){
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit ::Password);
    ui ->lineEdit_confirmMdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->button_valider, SIGNAL(clicked()), this, SLOT(verification()));
}

string GestionnaireCompte::getNom(){
    return ui->lineEdit_nom->text().toStdString();
}

string GestionnaireCompte::getMdp(){
    return ui->lineEdit_mdp->text().toStdString();
}

string GestionnaireCompte::getMdpConfirmation(){
    return ui->lineEdit_confirmMdp->text().toStdString();
}

string GestionnaireCompte::getAdresse(){
    return ui->lineEdit_mail->text().toStdString();
}

void GestionnaireCompte::verification(){
    QMessageBox alert;
    string nom = getNom();
    string mdp = getMdp();
    string mdpConfirmation = getMdpConfirmation();
    string adresse = getAdresse();

    QString mail = ui->lineEdit_mail->text();

    QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z][.])[a-zA-Z]{2,6}$");


    if (nom.empty() || mdp.empty() || mdpConfirmation.empty() || adresse.empty()){
        alert.setText("Erreur tous les champs ne sont pas rempli");
        alert.exec();
    }else if (mdp != mdpConfirmation){
        alert.setText("Erreur le mdp et le mdp de onfirmation sont différents");
        alert.exec();
    }else if(!regex.match(mail).hasMatch())
    {
        alert.setText("L'adresse mail n'est pas au bon format");
        alert.exec();
    }else
    {
        Utilisateur user(nom, adresse, mdp);
        utilisateurs.insert(make_pair(adresse, &user));

        utilisateurs.at(mail.toStdString())->toString();
    }
}

GestionnaireCompte::~GestionnaireCompte()
{
    delete ui;
}
