#include "connexion.h"
#include "ui_connexion.h"
#include "inscription.h"

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
}

Connexion::~Connexion()
{
    delete ui;
}



void Connexion::on_LinkButton_inscription_clicked()
{
    Inscription inscript(this);
    QWidget::connect(ui->pushButton_connexion, SIGNAL(clicked()), &inscript, SLOT(exec()));
}
