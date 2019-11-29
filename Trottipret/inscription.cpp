#include "inscription.h"
#include "ui_inscription.h"

Inscription::Inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit ::Password);
    ui ->lineEdit_confirmMdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->button_valider, SIGNAL(clicked()), this, SLOT(verification()));
}

void Inscription::verification() {
   gest.verification(getNom(), getMdp(), getMdpConfirmation(), getAdresse());
}

QString Inscription::getNom(){
    return ui->lineEdit_nom->text();
}

QString Inscription::getMdp(){
    return ui->lineEdit_mdp->text();
}

QString Inscription::getMdpConfirmation(){
    return ui->lineEdit_confirmMdp->text();
}

QString Inscription::getAdresse(){
    return ui->lineEdit_mail->text();
}

Inscription::~Inscription()
{
    delete ui;
}
