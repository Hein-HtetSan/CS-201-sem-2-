#include "iostream"
#include "stdlib.h"
#include "cstring"
using namespace std;

struct Student{
    char name[50];
    int age;
    int id;
};

int main()
{
    Student s1;
    cout<<"Enter Student Name : ";
    cin.get(s1.name, 50);
    cout<<"Enter Age : ";
    cin>>s1.age;
    cout<<"Enter Id : ";
    cin>>s1.id;

    cout<<endl;
    cout<<"Name : "<<s1.name<<endl<<"Age : "<<s1.age<<" years old"<<endl<<"Id : "<<s1.id<<endl;

    return 0;
}