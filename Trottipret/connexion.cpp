#include "connexion.h"
#include "ui_connexion.h"
#include "inscription.h"
#include "trottipretfenprincipale.h"

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
    if(gest.connexion(getMail(), getMdp())) {
        this->close();
        TrottipretFenPrincipale fen;
        fen.show();
    }
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
