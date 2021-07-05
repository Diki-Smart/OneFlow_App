#ifndef ENREGISTREMENT_H
#define ENREGISTREMENT_H

#include <QtGui/QDialog>

namespace Ui {
    class Enregistrement;
}

class Enregistrement : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Enregistrement)
public:
    explicit Enregistrement(QWidget *parent = 0);
    virtual ~Enregistrement();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Enregistrement *m_ui;
};

#endif // ENREGISTREMENT_H
