#include <iostream>
using namespace std;

int main()
{
    float one_cubic = 7.481;
    int gallons=0;
    double result=0;

    cout<<"Enter a number of Gallons : ";
    cin>>gallons;

    // calculations
    result = gallons / one_cubic;

    cout<<"There are "<<result<<" cubic in "<<gallons<<endl;
    return 0;
}

//done