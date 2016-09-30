#ifndef EDITCONTACT_H
#define EDITCONTACT_H

#include <QMainWindow>

namespace Ui {
class EditContact;
}

class EditContact : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditContact(QWidget *parent = 0);
    ~EditContact();

private:
    Ui::EditContact *ui;
};

#endif // EDITCONTACT_H
