#include "editcontact.h"
#include "ui_editcontact.h"

#include "afterlogin.h"
#include "ui_afterlogin.h"

EditContact::EditContact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditContact)
{
    ui->setupUi(this);
}

EditContact::~EditContact()
{
    delete ui;
}
