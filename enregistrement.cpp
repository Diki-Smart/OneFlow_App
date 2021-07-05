#include "enregistrement.h"
#include "ui_enregistrement.h"

Enregistrement::Enregistrement(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Enregistrement)
{
    m_ui->setupUi(this);















}

Enregistrement::~Enregistrement()
{
    delete m_ui;
}

void Enregistrement::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
