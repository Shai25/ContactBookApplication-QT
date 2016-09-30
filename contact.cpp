#include<iostream>
#include<string>

#include "string.h"
#include "stdlib.h"
#include "contact.h"

using namespace std;

contact::contact()
{
    null=true;
    name="";
    phoneno="";
    email="";
}
contact::contact (string in_name, string in_phoneno,string in_email){
    null=false;
    name=in_name;
    phoneno=in_phoneno;
    email=in_email;
}
contact::contact (string in_name, string in_phoneno){
    null=false;
    name=in_name;
    phoneno=in_phoneno;
    email="noemail";
}
string to_string(){ string s(name);s+=' ';s+=phoneno;s+=' ';s+=email;s+='\n'; return s;}
string get_name(){return name;}
string get_phoneno(){return phoneno;}
string get_email(){return email;}
void set_name(string in_name){name=in_name;}
void set_phoneno(string in_phoneno){phoneno=in_phoneno;}
void set_email(string in_email){email=in_email;}

