#ifndef MONCOMPTE_H
#define MONCOMPTE_H

#include <QMainWindow>

namespace Ui {
class MonCompte;
}

class MonCompte : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonCompte(QWidget *parent = 0);
    ~MonCompte();

private:
    Ui::MonCompte *ui;
};

#endif // MONCOMPTE_H
