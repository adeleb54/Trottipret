#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string.h>
#include <iostream>


class Utilisateur
{
public:
    Utilisateur(int id,std::string nom, std::string mdp, std::string adresse);
    ~Utilisateur();


};

#endif // UTILISATEUR_H
