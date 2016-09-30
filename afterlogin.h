#ifndef AFTERLOGIN_H
#define AFTERLOGIN_H

#include <QMainWindow>
#include "trienode.h"
#include "contact.h"
namespace Ui {
class AfterLogin;
}

class AfterLogin : public QMainWindow
{
    Q_OBJECT

public:
    Trienode root;
    contact * con;
    explicit AfterLogin(QWidget *parent = 0, Trienode *r =new Trienode());
    ~AfterLogin();

private slots:
    void on_addContact_clicked();

    void on_deleteContact_clicked();

    void on_editContact_clicked();

private:
    Ui::AfterLogin *ui;
};

#endif // AFTERLOGIN_H
