#ifndef TROTTIPRET_H
#define TROTTIPRET_H

#include <QMainWindow>
#include "gestionnaireCompte.h"

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
     * @brief Destructeur de l'objet Trottipret
     */
    ~PrincipaleFen();


private:
    int id;
    Ui::PrincipaleFen *ui;
    GestionnaireCompte gest;

private slots:
    /**
     * @brief Envoies vers la page de consultation du compte
     */
    void monCompte();

    void ajouterAnnonce();
};


#endif // TROTTIPRET_H
