#ifndef CONNEXIONDB_H
#define CONNEXIONDB_H

#include <iostream>
#include <QtSql>

class ConnexionDB
{
public:
    ConnexionDB();

private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

};

#endif // CONNEXIONDB_H
