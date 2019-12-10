#include "ajoutertrottinette.h"

AjouterTrottinette::AjouterTrottinette()
{

}

void AjouterTrottinette::creerTrottinette(){
    QSqlQuery query;
    query.prepare("INSERT INTO Trottinette(idTrot, nom, , mdp, notation) VALUES (:iduser, :nom, :mail, :mdp, :notation);");
    query.bindValue(":iduser", id);
    query.bindValue(":nom", nom);
    query.bindValue(":mail", mail);
    query.bindValue(":mdp", mdpHash.toHex());
    query.bindValue(":notation", 5);
    query.exec();
    query.finish();
}
