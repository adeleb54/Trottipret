#include "PrincipaleFen.h"
#include "ui_principaleFen.h"
#include "connexionUtilisateurFen.h"
#include "compteUtilisateurFen.h"
#include "annonceFen.h"

using namespace std;
/**
 * @author Roberge-Mentec Corentin
 */

/**
 * @brief Constructeur de la classe Trottipret
 * @param parent le QWidget de la classe Trottipret
 */
PrincipaleFen::PrincipaleFen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrincipaleFen)
{
    ui->setupUi(this);
    QObject::connect(ui->monCompte, SIGNAL(clicked()), this, SLOT(monCompte()));
    QObject::connect(ui->ajouterAnnonce, SIGNAL(triggered(bool)), this, SLOT(ajouterAnnonce()));
}

/**
 * @brief Lancement de l'application Trottipret
 */
void PrincipaleFen::executer(){
    this->hide();
    ConnexionUtilisateurFen connexion(gest);
    connexion.exec();
    if(connexion.isConnected()){
        this->show();
        id = connexion.getId();
        cout << gest.getAdresse(id).toStdString() << endl;
        cout << id << endl;
    }else{
        this->~PrincipaleFen();
    }

}

/**
 * @brief Méthode d'accès au compte utilisateur de Trottipret
 */
void PrincipaleFen::monCompte(){
    CompteUtilisateurFen monCompte(id);
    this->hide();
    monCompte.exec();
    this->show();
}

/**
 * @brief Lance la fenêtre d'ajout d'annonce
 */
void PrincipaleFen::ajouterAnnonce(){
    AnnonceFen annonceFen;
    annonceFen.exec();
}

/**
 * @brief Destructeur de l'objet Trottipret
 */
PrincipaleFen::~PrincipaleFen()
{
    delete ui;
}
