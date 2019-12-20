#ifndef TROTTIPRET_H
#define TROTTIPRET_H

#include <QMainWindow>
#include "gestionnaireCompte.h"
#include "gestionnaireAnnonce.h"

/**
 * @author Roberge-Mentec Corentin
 */

namespace Ui {
class Trottipret;
}

/**
 * @brief La classe Trottipret
 */
class Trottipret : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe Trottipret
     * @param parent le QWidget de la classe Trottipret
     */
    explicit Trottipret(QWidget *parent = 0);

    /**
     * @brief Lancement de l'application Trottipret
     */
    void executer();

    /**
     * @brief Destructeur de l'objet Trottipret
     */
    ~Trottipret();


private:
    int id;
    Ui::Trottipret *ui;
    GestionnaireCompte gestCompte;
    GestionnaireAnnonce gestAnnonce;

private slots:
    /**
     * @brief Envoies vers la page de consultation du compte
     */
    void monCompte();

    void ajouterAnnonce();
};


#endif // TROTTIPRET_H
