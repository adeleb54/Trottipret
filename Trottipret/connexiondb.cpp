#include "connexiondb.h"

using namespace std;

ConnexionDB::ConnexionDB()
{
    db.setDatabaseName("sqlite.db");
    bool ok = db.open();
}
