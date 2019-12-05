#include "connexion.h"
#include "ui_connexion.h"
#include "inscription.h"

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->inscription, SIGNAL(clicked()), this, SLOT(inscription()));
    QObject::connect(ui->pushButton_connexion, SIGNAL(clicked()), this, SLOT(verification()));

}

QString Connexion::getMail(){
    return ui-> lineEdit_mail->text();
}

QString Connexion::getMdp(){
    return ui->lineEdit_mdp->text();
}

void Connexion::verification(){
    if(gest.connexion(getMail(), getMdp())){
        this->hide();
    }
}

void Connexion::inscription(){
    Inscription inscription;
    inscription.exec();
}

void Connexion::close(){
    std::cout << "Fermeture de l'application" << std::endl;
}

Connexion::~Connexion()
{
    delete ui;
}
