#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include<string>

#include "string.h"
#include "stdlib.h"

using namespace std;

class contact{
    private :
            bool null;
            string name;
            string phoneno;
            string email;
    public :

            bool is_null()
            {
                return null;
            }
            bool set_null()
            {
                null=true;
            }

           contact()
            {
                null=true;
                name="";
                phoneno="";
                email="";
            }
            contact (string in_name, string in_phoneno,string in_email){
                null=false;
                name=in_name;
                phoneno=in_phoneno;
                email=in_email;
            }
            contact (string in_name, string in_phoneno){
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
};
/*int main()
{
    string name1("sarupdalwani"),name2("sarup");
    string phone1("9970843602"),phone2("00");
    string email1("dalwanisarup@gmail.com"),email2("fake@email.com");
    contact ct(name1,phone1,email1);
    cout<<"name : "<<ct.get_name()<<" phoneno : "<<ct.get_phoneno()<<" email : "<<ct.get_email()<<endl;
    ct.set_name(name2);
    cout<<"name : "<<ct.get_name()<<" phoneno : "<<ct.get_phoneno()<<" email : "<<ct.get_email()<<endl;
    ct.set_phoneno(phone2);
    cout<<"name : "<<ct.get_name()<<" phoneno : "<<ct.get_phoneno()<<" email : "<<ct.get_email()<<endl;
    ct.set_email(email2);
    cout<<"name : "<<ct.get_name()<<" phoneno : "<<ct.get_phoneno()<<" email : "<<ct.get_email()<<endl;
    return 0;
}*/


#endif // CONTACT_H
