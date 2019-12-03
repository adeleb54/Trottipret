#include "connexion.h"
#include "ui_connexion.h"
#include "inscription.h"

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);

    QObject::connect(ui->inscription, SIGNAL(clicked()), this, SLOT(inscription()));
    QObject::connect(ui->connexion, SIGNAL(accepted()), this, SLOT(verification()));
    QObject::connect(ui->connexion, SIGNAL(rejected()), this, SLOT(close()));
}

QString Connexion::getMail(){
    return NULL;
}

QString Connexion::getMdp(){
    return NULL;
}

void Connexion::verification(){
    std::cout << "un autre truc dedans" << std::endl;
}

void Connexion::inscription(){
    std::cout << "Un truc dedans" << std::endl;
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



void Connexion::on_LinkButton_inscription_clicked()
{
    Inscription inscript(this);
    inscript.exec();
}
