#include "inscription.h"
#include "ui_trottipret.h"

using namespace std;

Trottipret::Trottipret(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Trottipret)
{
    ui->setupUi(this);
    ui ->textMdp->setEchoMode(QLineEdit::Password);
    ui ->textMdp_2->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(getNom()));
}

void Trottipret::getNom(){
    QString str = ui->textNom->text();
}

Trottipret::~Trottipret()
{
    delete ui;
}

