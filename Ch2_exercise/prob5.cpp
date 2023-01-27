#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    char letter;
    int iszero;
    cout<<"Letter : ";
    cin>>letter;
    iszero = islower(letter);
    
    cout<<iszero<<endl;

    return 0;
}