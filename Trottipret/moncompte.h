#ifndef MONCOMPTE_H
#define MONCOMPTE_H

#include <QDialog>
#include <string.h>
#include <iostream>

namespace Ui {
class MonCompte;
}

/**
 * @brief La classe MonCompte
 */
class MonCompte : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe MonCompte
     * @param parent le QWidget de la classe MonCompte
     */
    explicit MonCompte(QWidget *parent = 0);

    /**
     * @brief Permet d'accéder au nom entré par l'utilisateur
     * @return le nom de l'utilisateur
     */
    QString getNom();

    /**
     * @brief Permet d'accéder au mail entré par l'utilisateur
     * @return le mail de l'utilisateur
     */
    QString getMail();

    /**
     * @brief Permet d'accéder à l'ancien mot de passe entré par l'utilisateur
     * @return l'ancien mot de passe de l'utilisateur
     */
    QString getAncienMdp();

    /**
     * @brief Permet d'accéder au nouveau mot de passe entré par l'utilisateur
     * @return le nouveau mot de passe de l'utilisateur
     */
    QString getMdp();

    /**
     * @brief Permet d'accéder au mot de passe de confirmation entré par l'utilisateur
     * @return le mot de passe de confirmation de l'utilisateur
     */
    QString getMdpConfirmationMdp();

    /**
     * Destructeur de l'objet MonCompte
     */
    ~MonCompte();

private:
    Ui::MonCompte *ui;

private slots:
    /**
     * @brief verification des informations à modifier
     */
    void verification();

    /**
     * @brief Méthode de retour vers la page d'accueil
     */
    void retour();

};

#endif // MONCOMPTE_H
