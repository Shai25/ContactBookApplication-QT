#include "deletecontact.h"
#include "ui_deletecontact.h"

#include "afterlogin.h"
#include "ui_afterlogin.h"

DeleteContact::DeleteContact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteContact)
{
    ui->setupUi(this);
}

DeleteContact::~DeleteContact()
{
    delete ui;
}

void DeleteContact::on_delete_2_clicked()
{
    // code to delete

    if(root.delete_contact(name))
    {
        ui->ifDeleted->setText("Contact deleted");
    }else
    {
        ui->ifDeleted->setText("Contact not found");
    }

    AfterLogin *testWindow=new AfterLogin;
    testWindow->show();
    this->~DeleteContact();
}
