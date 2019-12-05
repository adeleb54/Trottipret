#include "gestionnaireCompte.h"

/**
 * Modification : chiffrement de l'attribut mdp
 * Rennomage de la méthode verification en inscription
 * Ajout vérification que le mail est entré n'est pas déjà utilisé
 */

using namespace std;

/**
 * @brief GestionnaireCompte::GestionnaireCompte Le constructeur de l'objet GestionnaireCompte
 */
GestionnaireCompte::GestionnaireCompte(){

    /*On récupère le dernier id entré pour pouvoir l'incrémenter*/
    query.prepare("SELECT idUser FROM Utilisateur");
    query.exec();
    while(query.next()){
        id= query.value(0).toInt();
        id++;
    }
}

/**
 * @brief GestionnaireCompte::inscription Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est inscrit. Sinon il doit de nouveau entrer les champs
 * @return true si l'inscription s'est bien faite
 * @param nom Nom entré par l'utilisateur
 * @param mdp Mot de passe entré par l'utilisateur
 * @param mdpConfirmation Confirmation du mot de passe entrée par l'utilisateur
 * @param mail Adresse mail entrée par l'utilisateur
 */
bool GestionnaireCompte::inscription(QString nom, QString mdp, QString mdpConfirmation, QString mail){
    QMessageBox alert;
    bool test = false;


    QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z][.])[a-zA-Z]{2,6}$");

    /*Vérification que tous les champs sont corrects*/
    if (nom.toStdString().empty() || mdp.toStdString().empty() || mdpConfirmation.toStdString().empty() || mail.toStdString().empty()){
        alert.setText("Erreur tous les champs ne sont pas rempli");
        alert.exec();
    }else if (mdp.toStdString() != mdpConfirmation.toStdString()){
        alert.setText("Erreur le mdp et le mdp de confirmation sont différents");
        alert.exec();
    }else if(!regex.match(mail).hasMatch())
    {
        alert.setText("L'adresse mail n'est pas au bon format");
        alert.exec();
    }else{

        bool memeMail = false;

        /*On récupère tous les mails*/
        query.prepare("SELECT mail FROM Utilisateur");
        query.exec();
        while(query.next() && !memeMail){
            if(mail == query.value(0).toString()){
                memeMail = true;
            }
        }
        query.finish();

        if(!memeMail){
            /*Si tout est bon on peut entrer le nouvel utilisateur dans la base de données*/
            QByteArray mdpHash = QCryptographicHash::hash(mdp.toUtf8(), QCryptographicHash::Sha1);

            query.prepare("INSERT INTO Utilisateur(iduser, nom, mail, mdp, notation) VALUES (:iduser, :nom, :mail, :mdp, :notation);");
            query.bindValue(":iduser", id);
            query.bindValue(":nom", nom);
            query.bindValue(":mail", mail);
            query.bindValue(":mdp", mdpHash.toHex());
            query.bindValue(":notation", 5);
            query.exec();
            query.finish();
            id++;
            test = true;
            alert.setText("L'utilisateur : " + nom + " a été ajouté");
            alert.exec();
        }
        else{
            alert.setText("Email déjà utilisé");
            alert.exec();
        }
    }
    return test;
}

/**
 * @brief GestionnaireCompte::connexion Vérifie que les champs entrés par l'utilisateur sont corrects. Si c'est le cas, l'utilisateur est connecté. Sinon il doit de nouveau entrer les champs
 * @param mail Adresse mail entrée par l'utilisateur
 * @param mdp Mot de passe entré par l'utilisateur
 */
void GestionnaireCompte::connexion(QString mail, QString mdp){
    query.prepare("SELECT iduser, nom, mdp FROM Utilisateur WHERE mail=?");
    query.addBindValue(mail);

    /* Vérifie si la requête a bien été exécutée */
    if(!query.exec()) {
        QMessageBox msgBox;
        msgBox.setInformativeText("Erreur lors de l'éxecution de la requête");
        msgBox.exec();
    }

    /* Vérifie si on a un résultat */
    if (!query.first()) {
        QMessageBox msgBox;
        msgBox.setInformativeText("L'utilisateur n'existe pas.");
        msgBox.exec();
    }
    else{

        /* On chiffre le mdp saisi par l'utilisateur */
        QByteArray mdpHash = QCryptographicHash::hash(mdp.toUtf8(), QCryptographicHash::Sha1);
        QString mdpUser = mdpHash.toHex();

        QString mdpBd = query.value(2).toString();

        /* Vérifie si le mdp saisi par l'utilisateur correspond à celui dans la BD */
        if (mdpUser.compare(mdpBd)) {
            QMessageBox msgBox;
            msgBox.setInformativeText("L'adresse e-mail et le mot de passe ne correspondent pas.");
            msgBox.exec();
        }
    }

    cout << query.value(1).toString().toStdString() << endl;




}

/**
 * @brief GestionnaireCompte::~GestionnaireCompteDétruit l'obej GesstionnaireDeCompte
 */
GestionnaireCompte::~GestionnaireCompte()
{
}
