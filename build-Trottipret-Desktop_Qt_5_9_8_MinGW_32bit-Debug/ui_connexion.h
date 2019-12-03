/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_mail;
    QLineEdit *lineEdit_mail;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QPushButton *pushButton_connexion;
    QCommandLinkButton *LinkButton_inscription;
    QLabel *titre;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(579, 456);
        formLayoutWidget = new QWidget(Connexion);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 130, 361, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_mail = new QLabel(formLayoutWidget);
        label_mail->setObjectName(QStringLiteral("label_mail"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_mail);

        lineEdit_mail = new QLineEdit(formLayoutWidget);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_mail);

        label_mdp = new QLabel(formLayoutWidget);
        label_mdp->setObjectName(QStringLiteral("label_mdp"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_mdp);

        lineEdit_mdp = new QLineEdit(formLayoutWidget);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_mdp);

        pushButton_connexion = new QPushButton(formLayoutWidget);
        pushButton_connexion->setObjectName(QStringLiteral("pushButton_connexion"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_connexion);

        LinkButton_inscription = new QCommandLinkButton(Connexion);
        LinkButton_inscription->setObjectName(QStringLiteral("LinkButton_inscription"));
        LinkButton_inscription->setGeometry(QRect(200, 300, 193, 40));
        titre = new QLabel(Connexion);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setEnabled(true);
        titre->setGeometry(QRect(200, 70, 193, 30));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titre->sizePolicy().hasHeightForWidth());
        titre->setSizePolicy(sizePolicy);
        titre->setMaximumSize(QSize(16777210, 16777215));
        QFont font;
        font.setPointSize(15);
        titre->setFont(font);
        titre->setCursor(QCursor(Qt::ArrowCursor));
        titre->setMouseTracking(true);
        titre->setAlignment(Qt::AlignCenter);

        retranslateUi(Connexion);

        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Dialog", Q_NULLPTR));
        label_mail->setText(QApplication::translate("Connexion", "Entrez votre adresse mail :", Q_NULLPTR));
        label_mdp->setText(QApplication::translate("Connexion", "Entrez votre mot de passe :", Q_NULLPTR));
        pushButton_connexion->setText(QApplication::translate("Connexion", "Connexion", Q_NULLPTR));
        LinkButton_inscription->setText(QApplication::translate("Connexion", "Pas encore inscrit ?", Q_NULLPTR));
        titre->setText(QApplication::translate("Connexion", "Connexion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
