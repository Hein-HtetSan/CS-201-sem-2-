#include "iostream"
#include "cstdlib"
using namespace std;

void swap(int &x, int &y);

int main()
{
    int x=10, y=20;
    swap(x, y);
    return 0;
}

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}