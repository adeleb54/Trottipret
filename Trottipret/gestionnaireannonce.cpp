#include "gestionnaireannonce.h"

GestionnaireAnnonce::GestionnaireAnnonce(){
    QSqlQuery query;
    query.exec("SELECT idAnnonce FROM Annonce");
    while(query.next()){
        idAnnonce = query.value(0).toInt();
    }
    query.finish();

    query.exec("SELECT idTrot FROM Trottinette");
    while(query.next()){
        idTrot = query.value(0).toInt();
    }
    query.finish();
}

void GestionnaireAnnonce::ajouterAnnonce(QString nom, QString description, QString retrait, QString retour, int taille, bool electrique, double prix, QDate dateDeb, QDate dateFin, QTime heureDeb, QTime heureFin){
    QMessageBox alert;
    QSqlQuery query;
    if (taille < 60 || taille > 110){
        alert.setText("Erreur la taille de la trottinette doit être comprise entre 60cm et 110cm");
        alert.exec();
    }else if(prix <= 0 || prix >= 1000){
        alert.setText("Erreur le prix de la trottinette doit être compris entre 0€ (exclu) et 1000€ (exclu)");
        alert.exec();
    }else if (nom.toStdString() == ""){
        alert.setText("Erreur le nom de la trottinette doit être rempli");
        alert.exec();
    }else if (description.toStdString() == ""){
        alert.setText("Erreur la description de la trottinette doit être remplie");
        alert.exec();
    }else if (retrait.toStdString() == ""){
        alert.setText("Erreur le lieu de retrait de la trottinette doit être remplie");
        alert.exec();
    }else if(retour.toStdString() == ""){
        alert.setText("Erreur le lieu de retour de la trottinette doit être remplie");
        alert.exec();
    }else if(dateDeb >= dateFin){
        alert.setText("Erreur la date de début de location de la trottinette doit être inférieure à celle de fin de location");
        alert.exec();
    }else{
        query.prepare("INSERT INTO Trottinette(idTrot, taille, prix, etatTrot, electrique, idProprio) VALUES (:idTrot, :taille, :prix, :etatTrot, :electrique, :idProprio)");
        query.bindValue(":idTrot", idTrot);
        query.bindValue(":taille", taille);
        query.bindValue(":prix", prix);
        query.bindValue(":etatTrot", "disponible");
        query.bindValue(":electrique", electrique);
        query.bindValue(":idProprio", );
        query.exec();
        query.finish();
        idTrot++;
        alert.setText("La trottinette : " + nom + " a été ajoutée");
        alert.exec();


        query.prepare("INSERT INTO Annonce(idTrot, taille, prix, etatTrot, electrique, idProprio) VALUES (:iduser, :nom, :mail, :mdp, :notation)");
        query.bindValue(":iduser", id);
        query.bindValue(":nom", nom);
        query.bindValue(":mail", mail);
        query.bindValue(":mdp", mdpHash.toHex());
        query.bindValue(":notation", 5);
        query.exec();
        query.finish();
        idAnnonce++;
        alert.setText("L'annonce : " + nom + " a été ajoutée");
        alert.exec();
    }
}
