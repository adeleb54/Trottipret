#include "trottipret.h"
#include "ui_trottipret.h"
#include "connexion.h"
#include "moncompte.h"

/**
 * @author Roberge-Mentec Corentin
 */

/**
 * @brief Constructeur de la classe Trottipret
 * @param parent le QWidget de la classe Trottipret
 */
Trottipret::Trottipret(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Trottipret)
{
    ui->setupUi(this);
    QObject::connect(ui->monCompte, SIGNAL(clicked()), this, SLOT(monCompte()));
}

/**
 * @brief Lancement de l'application Trottipret
 */
void Trottipret::executer(){
    this->hide();
    Connexion connexion;
    connexion.exec();
    if(connexion.isConnected()){
        this->show();
    }else{
        this->~Trottipret();
    }
}

/**
 * @brief Méthode d'accès au compte utilisateur de Trottipret
 */
void Trottipret::monCompte(){
    MonCompte monCompte;
    this->hide();
    monCompte.exec();
    this->show();
}

/**
 * @brief Destructeur de l'objet Trottipret
 */
Trottipret::~Trottipret()
{
    delete ui;
}
