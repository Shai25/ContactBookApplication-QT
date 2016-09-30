#include "afterlogin.h"
#include "ui_afterlogin.h"
#include <QStandardItemModel>
#include<QStandardItem>

#include "addcontact.h"
#include "ui_addcontact.h"

#include "deletecontact.h"
#include "ui_deletecontact.h"

AfterLogin::AfterLogin(QWidget *parent, Trienode *r) :
    QMainWindow(parent),
    ui(new Ui::AfterLogin)
{
    root=*r;
    con=new contact();
    ui->setupUi(this);
    QStandardItemModel *model = new QStandardItemModel(2,3,this); //2 Rows and 3 Columns
   model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
     model->setHorizontalHeaderItem(1, new QStandardItem(QString("Phone")));
  model->setHorizontalHeaderItem(2, new QStandardItem(QString("Email")));


    QStandardItem *firstRow = new QStandardItem(QString("Praj"));
    model->setItem(0,0,firstRow);
    firstRow=new QStandardItem(QString("9757349844"));
     model->setItem(0,1,firstRow);
 firstRow=new QStandardItem(QString("kp@gmail.com"));
   model->setItem(0,2,firstRow);
    ui->tableView->setModel(model);
}

AfterLogin::~AfterLogin()
{
    delete ui;
}

void AfterLogin::on_addContact_clicked()
{
    AddContact *testWindow = new AddContact(&root);
    testWindow->show();
       this->~AfterLogin();
}

void AfterLogin::on_deleteContact_clicked()
{
    DeleteContact *testWindow = new DeleteContact();
    testWindow->show();
       this->~AfterLogin();
}

void AfterLogin::on_editContact_clicked()
{
    AddContact *testWindow = new AddContact(&root);
    testWindow->show();
    this->~AfterLogin();
}
