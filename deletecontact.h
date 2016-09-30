#ifndef DELETECONTACT_H
#define DELETECONTACT_H

#include <QMainWindow>

namespace Ui {
class DeleteContact;
}

class DeleteContact : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteContact(QWidget *parent = 0);
    ~DeleteContact();

private slots:
    void on_delete_2_clicked();

private:
    Ui::DeleteContact *ui;
};

#endif // DELETECONTACT_H
