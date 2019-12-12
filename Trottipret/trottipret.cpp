#include "trottipret.h"
#include "ui_trottipret.h"
#include "connexionUtilisateurFen.h"
#include "moncompte.h"
#include "annonceFen.h"

using namespace std;
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
    QObject::connect(ui->ajouterAnnonce, SIGNAL(triggered(bool)), this, SLOT(ajouterAnnonce()));
}

/**
 * @brief Lancement de l'application Trottipret
 */
void Trottipret::executer(){
    this->hide();
    ConnexionUtilisateurFen connexion(gest);
    connexion.exec();
    if(connexion.isConnected()){
        this->show();
        id = connexion.getId();
        cout << gest.getAdresse(id).toStdString() << endl;
        cout << id << endl;
    }else{
        this->~Trottipret();
    }

}

/**
 * @brief Méthode d'accès au compte utilisateur de Trottipret
 */
void Trottipret::monCompte(){
    MonCompte monCompte(id);
    this->hide();
    monCompte.exec();
    this->show();
}

/**
 * @brief Lance la fenêtre d'ajout d'annonce
 */
void Trottipret::ajouterAnnonce(){
    AnnonceFen annonceFen;
    annonceFen.exec();
}

/**
 * @brief Destructeur de l'objet Trottipret
 */
Trottipret::~Trottipret()
{
    delete ui;
}
