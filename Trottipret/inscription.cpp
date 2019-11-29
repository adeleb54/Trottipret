#include "inscription.h"
#include "ui_inscription.h"

/**
 * @brief
 *
 * @param parent
 */
Inscription::Inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit ::Password);
    ui ->lineEdit_confirmMdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->button_valider, SIGNAL(clicked()), this, SLOT(verification()));
}

/**
 * @brief
 *
 */
void Inscription::verification() {
   gest.verification(getNom(), getMdp(), getMdpConfirmation(), getAdresse());
}

/**
 * @brief
 *
 * @return QString
 */
QString Inscription::getNom(){
    return ui->lineEdit_nom->text();
}

/**
 * @brief
 *
 * @return QString
 */
QString Inscription::getMdp(){
    return ui->lineEdit_mdp->text();
}

/**
 * @brief
 *
 * @return QString
 */
QString Inscription::getMdpConfirmation(){
    return ui->lineEdit_confirmMdp->text();
}

/**
 * @brief
 *
 * @return QString
 */
QString Inscription::getAdresse(){
    return ui->lineEdit_mail->text();
}

/**
 * @brief
 *
 */
Inscription::~Inscription()
{
    delete ui;
}
