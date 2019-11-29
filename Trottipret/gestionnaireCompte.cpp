#include "gestionnaireCompte.h"
#include "ui_gestionnaireCompte.h"
#include <iostream>
#include <QtSql>

using namespace std;

GestionnaireCompte::GestionnaireCompte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestionnaireCompte){
    db.setDatabaseName("./sqlite.db");

    if(!db.open()){
        cout << "Je ne suis pas connecté à " << db.hostName().toStdString() << endl;
    }

    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit ::Password);
    ui ->lineEdit_confirmMdp->setEchoMode(QLineEdit::Password);

    QObject::connect(ui->button_valider, SIGNAL(clicked()), this, SLOT(verification()));
}

QString GestionnaireCompte::getNom(){
    return ui->lineEdit_nom->text();
}

QString GestionnaireCompte::getMdp(){
    return ui->lineEdit_mdp->text();
}

QString GestionnaireCompte::getMdpConfirmation(){
    return ui->lineEdit_confirmMdp->text();
}

QString GestionnaireCompte::getAdresse(){
    return ui->lineEdit_mail->text();
}

void GestionnaireCompte::verification(){
    QMessageBox alert;
    QString nom = getNom();
    QString mdp = getMdp();
    QString mdpConfirmation = getMdpConfirmation();
    QString mail = getAdresse();

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
    }else
    {

        Utilisateur user(nom.toStdString(), mail.toStdString(), mdp.toStdString());
        qDebug() << query.exec("INSERT INTO Utilisateur(iduser, nom, mail, mdp, notation) VALUES (1, 'coco', 'oui', 'channel', 5);") << endl;
        /*query.prepare("INSERT INTO Utilisateur(iduser, nom, mail, mdp, notation) VALUES (:iduser, :nom, :mail, :mdp, :notation);");
        query.bindValue(":iduser", 1);
        query.bindValue(":nom", nom);
        query.bindValue(":mail", mail);
        query.bindValue(":mdp", mdp);
        query.bindValue(":notation", 5);
        cout << query.lastQuery().toStdString() << endl;
        cout << query.isValid() << endl;
        qDebug()<< query.exec() << "  " << query.lastError() <<endl;
        query.finish();*/
        query.prepare("SELECT * FROM Utilisateur");
        if(query.exec())
        {
            int i = 0;
            while(query.next())
            {
                while(i < 5){
                QString nameRow = query.value(i).toString();//Récupère le résultat de la requête
                cout << "résultat : " << nameRow.toStdString() << endl;
                i++;
                }
            }
        }else{
            cout << "faux" << endl;
        }
        //query.finish();
    }
}

GestionnaireCompte::~GestionnaireCompte()
{
    delete ui;
}
