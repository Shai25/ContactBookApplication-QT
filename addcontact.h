#ifndef ADDCONTACT_H
#define ADDCONTACT_H

#include <QMainWindow>

#include "contact.h"
#include "trienode.h"

namespace Ui {
class AddContact;
}

class AddContact : public QMainWindow
{
    Q_OBJECT

public:
    Trienode root;
    contact * con;
    explicit AddContact(QWidget *parent = 0, Trienode *r=new Trienode );
    ~AddContact();

private slots:
    void on_saveNewContact_clicked();

private:
    Ui::AddContact *ui;
};

#endif // ADDCONTACT_H
