#include "iostream"
#include "stdlib.h"
using namespace std;

void change(int x);

int main()
{

    int y=10;
    cout<<&y<<endl;
    change(y);
    cout<<"Value of y is : "<<y<<endl;
    return 0;

}

void change(int x)
{
    cout<<&x<<endl;
    x = x+20;
    cout<<"Value of x is : "<<x<<endl;
}