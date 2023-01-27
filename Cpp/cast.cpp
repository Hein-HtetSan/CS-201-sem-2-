#include <iostream>
using namespace std;
int main()
{
    // static cast
    int intVar = 15000000;
    intVar = (intVar * 10);
    cout<<"intVar = "<<intVar <<endl;

    intVar = (static_cast<double>(intVar) * 10);
    cout<<"intVar now = "<<intVar <<endl;

    int percent = 37;
    cout<<" percent ASCII = "<<static_cast<char>(percent)<<endl;

    int letterA = 65;
    cout<<"Letter ASCII = "<<static_cast<char>(letterA)<<endl;

    // another format of type casting in CPP
    char letter = 'd';
    cout<<letter<<" is "<<(int)letter<<endl;

    return 0;
}