#ifndef TROTTIPRET_H
#define TROTTIPRET_H

#include <QMainWindow>
#include <string.h>

using namespace std;

namespace Ui {
class Trottipret;
}

class Trottipret : public QMainWindow
{
    Q_OBJECT

public:
    string getNom();
    string getMdp();
    string getAdresse();
    string getMdpConfirmation();
    explicit Trottipret(QWidget *parent = 0);
    ~Trottipret();

private:
    Ui::Trottipret *ui;

public slots:
    void verification();
};

#endif // TROTTIPRET_H
