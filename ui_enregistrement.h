/********************************************************************************
** Form generated from reading ui file 'enregistrement.ui'
**
** Created: Tue 18. Nov 12:09:55 2014
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ENREGISTREMENT_H
#define UI_ENREGISTREMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Enregistrement
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Enregistrement)
    {
        if (Enregistrement->objectName().isEmpty())
            Enregistrement->setObjectName(QString::fromUtf8("Enregistrement"));
        Enregistrement->resize(400, 300);
        buttonBox = new QDialogButtonBox(Enregistrement);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Enregistrement);
        QObject::connect(buttonBox, SIGNAL(accepted()), Enregistrement, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Enregistrement, SLOT(reject()));

        QMetaObject::connectSlotsByName(Enregistrement);
    } // setupUi

    void retranslateUi(QDialog *Enregistrement)
    {
        Enregistrement->setWindowTitle(QApplication::translate("Enregistrement", "Dialog", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Enregistrement);
    } // retranslateUi

};

namespace Ui {
    class Enregistrement: public Ui_Enregistrement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENREGISTREMENT_H
