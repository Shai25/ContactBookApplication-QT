#include "addcontact.h"
#include "ui_addcontact.h"

#include "afterlogin.h"
#include "ui_afterlogin.h"

#include "contact.h"
#include "mainwindow.h"

AddContact::AddContact(QWidget *parent,Trienode *r) :
    QMainWindow(parent),
    ui(new Ui::AddContact)
{
     root=*r;
     con=new contact();
    ui->setupUi(this);
}

AddContact::~AddContact()
{
    delete ui;
}

void AddContact::on_saveNewContact_clicked()
{
    //check if contact exists if yes then replace
    //else add
    //then redirect to contact
    std::string name=ui->name->text().toStdString();
    std::string phone=ui->phone->text().toStdString();
    std::string email=ui->email->text().toStdString();

    con=new contact(name,phone,email);
    root.add_contact(name,con);

    AfterLogin *testWindow=new AfterLogin;
    testWindow->show();
    this->~AddContact();

}
