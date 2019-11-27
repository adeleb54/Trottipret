#include "utilisateur.h"

using namespace std;

long Utilisateur::idinc = 0;

Utilisateur::Utilisateur(string nom, string mail, string mdp)
{
    this->nom = nom;
    this->mail = mail;
    this->mdp = mdp;
    this->idUtilisateur = idinc;
    this->idinc++;
}

void Utilisateur::setIdUtilisateur(int id)
{
    this->idUtilisateur = id;
}

void Utilisateur::setNom(string nom)
{
    this->nom = nom;
}

void Utilisateur::setMail(string mail)
{
    this->mail = mail;
}

void Utilisateur::setMdp(string mdp)
{
    this->mdp = mdp;
}

long Utilisateur::getIdUtilisateur()
{
    return this->idUtilisateur;
}

string Utilisateur::getNom()
{
    return this->nom;
}

string Utilisateur::getMail()
{
    return this->mail;
}

string Utilisateur::getMdp()
{
    return this->mdp;
}

void Utilisateur::toString(){
    cout << "Utilisateur numero : " + to_string(idUtilisateur) << "\n";
    cout << "   nom : " + nom << "\n";
    cout << "   mail : " + mail << endl;
}
