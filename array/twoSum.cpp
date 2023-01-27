#include "iostream"
#include "stdlib.h"

using namespace std;

void two_Sum(int ans);
int arr[10] = {1, 3, 5, 7, 9, 11, 16};

int main()
{
    int sum = 0;
    cout<<"Enter number : ";
    cin>>sum;

    // operation
    two_Sum(sum);

    return 0;
}

void two_Sum(int num)
{
    int temp;
    for(int i=0; i<10; i++)
    {
        for(int j=10; j>i; j--)
        {
            temp = arr[i] + arr[j];
            if(temp == num)
            {
                cout<<"We found : index i = "<<i<<" and j = "<<j<<endl;
            }
        }
    }
}