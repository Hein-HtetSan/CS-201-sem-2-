#include <iostream>
using namespace std;
int main()
{
    int count=0;
    int step=0;
    cout<<"Enter Number of Count : ";
    cin>>count;
    cout<<"Enter Number of Step Each time : ";
    cin>>step;

    switch(step)
    {
        case 1: step += 1;break;
        case 2: step += 2;break;
        case 3: step += 3;break;
        case 4: step += 4;break;
    }
    
    for(int i=0; i<count; i+=step)
    {
        cout<<"number = "<<i<<endl;
    }

    return 0;
}