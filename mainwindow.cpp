#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "logic.h"
#include "string.h"
#include "stdlib.h"

#include "afterlogin.h"
#include "ui_afterlogin.h"

#include<fstream>
#include<sstream>
#include "contact.h"
#include "trienode.h"

using namespace std;

int process(int a ,int b);
int checklogin(char a[], char b[]);
int dosignup(char a[], char b[]);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_login_clicked()
{
  std::string username=ui->usernameLogin->text().toStdString();
  std::string password=ui->passwordLogin->text().toStdString();

  int c=process(12,12);

  ui->label_7->setText(QString::number(c));
char a[100],b[100];
  int i=0;
  for(i=0;i<int(username.length());i++)
      a[i]=username[i];
  for(i=0;i<int(password.length());i++)
      b[i]=password[i];
  if(checklogin(a,b))
  {
  AfterLogin *testWindow = new AfterLogin(&root);
  testWindow->show();
  //this->~MainWindow();
  }
}

void MainWindow::on_signup_clicked()
{
    /*
    std::string username=ui->usernameSignup->text().toStdString();
    std::string password=ui->passwordSignup->text().toStdString();
    char a[100],b[100];
      int i=0;
      for(i=0;i<int(username.length());i++)
          a[i]=username[i];
      for(i=0;i<int(password.length());i++)
          b[i]=password[i];
    if(dosignup(a,b))
    {
    AfterLogin *testWindow = new AfterLogin(&root);
    testWindow->show();
    //this->~MainWindow();
    }
    */
}

Trienode MainWindow::getRoot()
{
    return root;
}
contact * MainWindow:: getCon()
{
    return con;
}

