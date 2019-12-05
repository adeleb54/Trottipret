#include "moncompte.h"
#include "ui_moncompte.h"

MonCompte::MonCompte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonCompte)
{
    ui->setupUi(this);
}

MonCompte::~MonCompte()
{
    delete ui;
}
