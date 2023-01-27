#include <iostream>
using namespace std;

int main()
{
    int var1, var2;
    int num1 = 6;
    int num2 = 5;
    var1 = num1++;
    cout<<"num1 is "<<num1<<endl;
    cout<<"var1 is "<<var1<<endl;
    var2 = ++num2;
    cout<<"num1 is "<<num2<<endl;
    cout<<"var1 is "<<var2<<endl;
    return 0;
}