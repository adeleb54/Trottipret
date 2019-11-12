#include "trottipret.h"
#include "ui_trottipret.h"

Trottipret::Trottipret(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Trottipret)
{
    ui->setupUi(this);
}

Trottipret::~Trottipret()
{
    delete ui;
}
