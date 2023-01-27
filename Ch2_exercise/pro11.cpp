#include <iostream>

using namespace std;


int main()
{
    int a,b,c,d;
    char dummychar;
    int res;
    cin>>a>>dummychar>>b;
    cin>>c>>dummychar>>d;
    
    cout<<" ans : "<<(a*d)+(b*c)<<dummychar<<b*d<<endl;


    // // 1 pound = 20 shillings
    // 1 shilling = 12pence 
    // 1 pound = 240 pence 
    float pound, shilling, pence;
    cin>>pound;
    cin>>shilling;
    cin>>pence;
    shilling = shilling / 20;
    pence = pence / 240;
    pound = pound + shilling + pence;
    cout<<"Decimal Pound : \x9c"<<pound<<endl;
    return 0;
}