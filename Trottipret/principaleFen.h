#ifndef TROTTIPRET_H
#define TROTTIPRET_H

#include <QMainWindow>
#include "gestionnaireCompte.h"
#include "gestionnaireannonce.h"

/**
 * @author Roberge-Mentec Corentin
 */

namespace Ui {
class PrincipaleFen;
}

/**
 * @brief La classe Trottipret
 */
class PrincipaleFen : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe Trottipret
     * @param parent le QWidget de la classe Trottipret
     */
    explicit PrincipaleFen(QWidget *parent = 0);

    /**
     * @brief Lancement de l'application Trottipret
     */
    void executer();

    /**
     * @brief Permet d'accéder à l'id de l'utilisateur actuel de l'application
     * @return l'id de l'utilisateur
     */
    int getId();

    /**
     * @brief Destructeur de l'objet Trottipret
     */
    ~PrincipaleFen();


private:
    int id;
<<<<<<< Updated upstream:Trottipret/principaleFen.h
    Ui::PrincipaleFen *ui;
    GestionnaireCompte gest;
=======
    Ui::Trottipret *ui;
    GestionnaireCompte gestCompte;
    GestionnaireAnnonce gestAnnonce;
>>>>>>> Stashed changes:Trottipret/trottipret.h

private slots:
    /**
     * @brief Envoies vers la page de consultation du compte
     */
    void monCompte();

    void ajouterAnnonce();
};


#endif // TROTTIPRET_H
