#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

#include "logic.h"
#include "string.h"
#include "contact.h"
#include "trienode.h"

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
//ifstream infile("contacts.csv");
Trienode root;
contact * con;
Trienode getRoot();
contact * getCon();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_signup_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
