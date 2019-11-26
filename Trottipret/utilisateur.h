#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>


class Utilisateur
{
public:
    Utilisateur(std::string nom, std::string mail, std::string mdp);
    void setIdUtilisateur(int id);
    void setNom(std::string nom);
    void setMail(std::string mail);
    void setMdp(std::string mdp);
    long getIdUtilisateur();
    std::string getNom();
    std::string getMail();
    std::string getMdp();

private :
    long idUtilisateur;
    std::string nom;
    std::string mail;
    std::string mdp;
};
#endif // UTILISATEUR_H
