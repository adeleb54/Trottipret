#ifndef CONNEXIONDB_H
#define CONNEXIONDB_H

#include <iostream>
#include <QtSql>

/**
 * @author Vernevaut Corentin
 */

/**
 * @brief La classe ConnexionDB
 */
class ConnexionDB
{
public:
    /**
     * @brief Constructeur de la classe ConnexionDB, instancie la base de données
     */
    ConnexionDB();

private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

};

#endif // CONNEXIONDB_H
