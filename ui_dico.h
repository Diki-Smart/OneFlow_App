/********************************************************************************
** Form generated from reading ui file 'dico.ui'
**
** Created: Fri 28. Nov 13:11:52 2014
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DICO_H
#define UI_DICO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dico
{
public:
    QWidget *centralWidget;
    QLabel *label3d;
    QFrame *line;
    QPushButton *Buttonf;
    QPushButton *Buttont;
    QPushButton *Buttonm;
    QPushButton *Buttonw;
    QPushButton *Buttonson;
    QPushButton *Buttonsonoff;
    QPushButton *Buttonrecherche;
    QLineEdit *lineEdit;
    QPushButton *Buttongoogle;
    QTextBrowser *textBrowser;
    QListWidget *listWidgetR;
    QPushButton *Buttonaccueil;
    QPushButton *Buttonreturn;
    QPushButton *Buttonliste;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dico)
    {
        if (dico->objectName().isEmpty())
            dico->setObjectName(QString::fromUtf8("dico"));
        dico->resize(800, 470);
        centralWidget = new QWidget(dico);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label3d = new QLabel(centralWidget);
        label3d->setObjectName(QString::fromUtf8("label3d"));
        label3d->setGeometry(QRect(580, 24, 231, 375));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(567, 30, 31, 391));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        Buttonf = new QPushButton(centralWidget);
        Buttonf->setObjectName(QString::fromUtf8("Buttonf"));
        Buttonf->setGeometry(QRect(590, 390, 41, 31));
        Buttonf->setStyleSheet(QString::fromUtf8(""));
        Buttont = new QPushButton(centralWidget);
        Buttont->setObjectName(QString::fromUtf8("Buttont"));
        Buttont->setGeometry(QRect(640, 390, 41, 31));
        Buttonm = new QPushButton(centralWidget);
        Buttonm->setObjectName(QString::fromUtf8("Buttonm"));
        Buttonm->setGeometry(QRect(690, 390, 41, 31));
        Buttonw = new QPushButton(centralWidget);
        Buttonw->setObjectName(QString::fromUtf8("Buttonw"));
        Buttonw->setGeometry(QRect(740, 390, 41, 31));
        Buttonson = new QPushButton(centralWidget);
        Buttonson->setObjectName(QString::fromUtf8("Buttonson"));
        Buttonson->setGeometry(QRect(10, 390, 41, 31));
        Buttonsonoff = new QPushButton(centralWidget);
        Buttonsonoff->setObjectName(QString::fromUtf8("Buttonsonoff"));
        Buttonsonoff->setGeometry(QRect(10, 390, 41, 31));
        Buttonrecherche = new QPushButton(centralWidget);
        Buttonrecherche->setObjectName(QString::fromUtf8("Buttonrecherche"));
        Buttonrecherche->setGeometry(QRect(500, 30, 41, 31));
        Buttonrecherche->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(168, 33, 331, 25));
        Buttongoogle = new QPushButton(centralWidget);
        Buttongoogle->setObjectName(QString::fromUtf8("Buttongoogle"));
        Buttongoogle->setGeometry(QRect(540, 30, 41, 31));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 64, 521, 357));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(36, 36, 36);"));
        listWidgetR = new QListWidget(centralWidget);
        listWidgetR->setObjectName(QString::fromUtf8("listWidgetR"));
        listWidgetR->setGeometry(QRect(170, 58, 181, 91));
        Buttonaccueil = new QPushButton(centralWidget);
        Buttonaccueil->setObjectName(QString::fromUtf8("Buttonaccueil"));
        Buttonaccueil->setGeometry(QRect(60, 25, 63, 39));
        Buttonaccueil->setStyleSheet(QString::fromUtf8(""));
        Buttonreturn = new QPushButton(centralWidget);
        Buttonreturn->setObjectName(QString::fromUtf8("Buttonreturn"));
        Buttonreturn->setGeometry(QRect(122, 25, 41, 39));
        Buttonliste = new QPushButton(centralWidget);
        Buttonliste->setObjectName(QString::fromUtf8("Buttonliste"));
        Buttonliste->setGeometry(QRect(470, 33, 28, 24));
        dico->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dico);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        dico->setMenuBar(menuBar);
        statusBar = new QStatusBar(dico);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dico->setStatusBar(statusBar);

        retranslateUi(dico);

        QMetaObject::connectSlotsByName(dico);
    } // setupUi

    void retranslateUi(QMainWindow *dico)
    {
        dico->setWindowTitle(QApplication::translate("dico", "dico", 0, QApplication::UnicodeUTF8));
        label3d->setText(QString());
        Buttonf->setText(QString());
        Buttont->setText(QString());
        Buttonm->setText(QString());
        Buttonw->setText(QString());
        Buttonson->setText(QString());
        Buttonsonoff->setText(QString());
        Buttonrecherche->setText(QString());
        Buttongoogle->setText(QString());
        Buttonaccueil->setText(QString());
        Buttonreturn->setText(QString());
        Buttonliste->setText(QString());
        Q_UNUSED(dico);
    } // retranslateUi

};

namespace Ui {
    class dico: public Ui_dico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICO_H
