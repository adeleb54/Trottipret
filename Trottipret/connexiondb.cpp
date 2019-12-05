#include "connexiondb.h"

/**
 * @author Corentin Vernevaut
 */
using namespace std;

/**
 * @brief Constructeur de la classe ConnexionDB, instancie la base de données
 */
ConnexionDB::ConnexionDB()
{
    db.setDatabaseName("sqlite.db");
    if(!db.open()){
        cout << "Je ne suis pas connecté à " << db.hostName().toStdString() << endl;
    }
}
