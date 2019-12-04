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
    QObject::connect(ui->connexion, SIGNAL(accepted()), this, SLOT(verification()));
    QObject::connect(ui->connexion, SIGNAL(rejected()), this, SLOT(close()));

}

QString Connexion::getMail(){
    return ui-> lineEdit_mail->text();
}

QString Connexion::getMdp(){
    return ui->lineEdit_mdp->text();
}

void Connexion::verification(){
    gest.connexion(getMail(), getMdp());
}

void Connexion::inscription(){
    Inscription inscription;
    this->hide();
    inscription.exec();
}

void Connexion::close(){
    std::cout << "fermer app" << std::endl;
}

Connexion::~Connexion()
{
    delete ui;
}
