#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"

using namespace std;

GestionnaireCompte::GestionnaireCompte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionnaireCompte){
    ui->setupUi(this);
    ui->textMdp->setEchoMode(QLineEdit ::Password);
    ui ->textMdp_2->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(getNom()));
}

void GestionnaireCompte::getNom(){
    QString str = ui->textNom->text();
}

GestionnaireCompte::~GestionnaireCompte()
{
    delete ui;
}



