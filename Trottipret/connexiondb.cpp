#include "connexiondb.h"

/**
 * @author Corentin Vernevaut
 */
using namespace std;

/**
 * @brief ConnexionDB::ConnexionDB
 */
ConnexionDB::ConnexionDB()
{
    db.setDatabaseName("sqlite.db");
    if(!db.open()){
        cout << "Je ne suis pas connecté à " << db.hostName().toStdString() << endl;
    }
}
