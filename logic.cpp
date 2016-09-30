#include "logic.h"
#include "string.h"
#include "stdlib.h"
logic::logic()
{

}

//logic();
int process(int a ,int b)
{
    return a+b;
}

int checklogin(char a[],  char b[])
{
    int i=0;
    for(i=0;i<4;i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}

int dosignup(char a[], char b[])
{
    //store in file
    return 1;
}
