#include "iostream"
#include "stdlib.h"
#include "cstring"
using namespace std;

void sum();
void subtract();
void multiply();
void divide();

int main()
{
    char opt;
    while(true)
    {
        cout<<"Choose Option: ";
        cin>>opt;
        switch(opt)
        {
            case '+': sum();break;
            case '-': subtract(); break;
            case '*': multiply(); break;
            case '/': divide(); break;
            default: cout<<"None"; break;
        }
        cout<<"Do you wish to continue : [y/n] ";
        cin>>opt;
        if(opt == 'n')
        {
            break;
        }
    }
    return 0;
}


void sum()
{
    int n1,n2;
    char sign;
    cout<<"Enter n1 + n2"<<endl;
    cin>>n1>>sign>>n2;

    cout<<endl<<"Result : "<<n1+n2<<endl;
}

void subtract()
{
    int n1,n2;
    char sign;
    cout<<"Enter n1 - n2"<<endl;
    cin>>n1>>sign>>n2;

    cout<<endl<<"Result : "<<n1-n2<<endl;
}

void multiply()
{
    int n1,n2;
    char sign;
    cout<<"Enter n1 * n2"<<endl;
    cin>>n1>>sign>>n2;

    cout<<endl<<"Result : "<<n1*n2<<endl;
}

void divide()
{
    int n1,n2;
    char sign;
    cout<<"Enter n1 / n2"<<endl;
    cin>>n1>>sign>>n2;

    cout<<endl<<"Result : "<<n1/n2<<endl;
}