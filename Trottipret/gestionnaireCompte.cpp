#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"

using namespace std;

GestionnaireCompte::GestionnaireCompte(){
    db.setDatabaseName("./sqlite.db");

    if(!db.open()){
        cout << "Je ne suis pas connecté à " << db.hostName().toStdString() << endl;
    }
    query.prepare("SELECT idUser FROM Utilisateur");
    query.exec();
    while(query.next()){
        id= query.value(0).toInt();
        id++;
    }
}

void GestionnaireCompte::verification(QString nom, QString mdp, QString mdpConfirmation, QString mail){
    QMessageBox alert;

    QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z][.])[a-zA-Z]{2,6}$");


    if (nom.toStdString().empty() || mdp.toStdString().empty() || mdpConfirmation.toStdString().empty() || mail.toStdString().empty()){
        alert.setText("Erreur tous les champs ne sont pas rempli");
        alert.exec();
    }else if (mdp.toStdString() != mdpConfirmation.toStdString()){
        alert.setText("Erreur le mdp et le mdp de onfirmation sont différents");
        alert.exec();
    }else if(!regex.match(mail).hasMatch())
    {
        alert.setText("L'adresse mail n'est pas au bon format");
        alert.exec();
    }else{

        query.prepare("INSERT INTO Utilisateur(iduser, nom, mail, mdp, notation) VALUES (:iduser, :nom, :mail, :mdp, :notation);");
        query.bindValue(":iduser", id);
        query.bindValue(":nom", nom);
        query.bindValue(":mail", mail);
        query.bindValue(":mdp", mdp);
        query.bindValue(":notation", 5);
        query.exec();
        query.finish();
        id++;
        cout << "Ajouté !" << endl;
    }
}

GestionnaireCompte::~GestionnaireCompte()
{
}
