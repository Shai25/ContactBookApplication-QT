#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>

#include "trienode.h"
#include "contact.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int indexofchar(char c)
{
    if(c>='a' && c<='z')return c-'a';
    else if(c==' ')return 26;
    else return -1;
}

Trienode::Trienode(){
    count=0;
    for(int i=0;i<27;i++)
        array[i]=NULL;
    end=false;
}
void add_contact(string name,contact* ct){
    if(name.length()==0){
        end=true;

        con=*(new contact((*ct).get_name(),(*ct).get_phoneno(),(*ct).get_email()));
    }else{
        char ch=name[0];
        int chname=indexofchar(ch);
        if(array[chname]!=NULL){
            (*array[chname]).add_contact(name.substr(1),ct);
        }else{
            array[chname]=new Trienode;
            count++;
            (*array[chname]).add_contact(name.substr(1),ct);

        }
    }
}
bool Trienode::delete_contact(string name)
{
    contact * c=fetch_contact(name);
    if(c!=NULL)
    {
        (*c).set_null();
        return true;
    }
    return false;
}
contact * fetch_contact(string name)
{
    //cout<<name<<" "<<end;
    if(end && !con.is_null() && name.length()==0)
    {
        return &con;
    }
    else if(name.length()==0) return NULL;
    char ch=name[0];
    int chname=indexofchar(ch);
    if(array[chname]!=NULL){
        return (*array[chname]).fetch_contact(name.substr(1));
    }else{
        return NULL;
    }
}
string traverse()
{
    string ret("");
    if(end==true && !con.is_null())
    {
        ret+=con.to_string();
        //cout<<"ret : "<<ret<<endl;
    }
    for(int i=0;i<27;i++)
    {
        if(array[i]!=NULL){
            //cout<<" i = "<<i<<endl;
            //cout<<" char = "<<char(i+'a')<<endl;
            ret+=(*array[i]).traverse();
        }
    }
    return ret;

}

