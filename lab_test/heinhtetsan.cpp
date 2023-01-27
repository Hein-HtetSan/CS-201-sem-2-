
// Lab Testing 1 CS-201
/*
Name - Hein Htet San
Section - A
YKPT - 22270
Lab Test
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const float PI = 3.14;
    int opt;
    char answer;
    float width, height, area, radius;

    do
    {
        // checking valid option or not 
        while(true)
        {
            cout<<"\nFor Circle, press 1\nFor Rectangle, press 2\n\n";
            cout<<"Enter Your Choice : ";
            cin>>opt;
            if(opt == 1 || opt==2){
                break;
            }else{
                cout<<"Invalid Choice!\n";
            }
        }
        

        if(opt == 1) // area of circle
        {
            cout<<"Enter Radius : ";
            cin>>radius;
            area = PI * radius * radius;
            cout<<"The area of circle is "<<area<<endl;
        }
        else if(opt == 2) // area of rectangle
        {
            cout<<"Enter Width : ";
            cin>>width;
            cout<<"Enter Height : ";
            cin>>height;
            area = width * height;
            cout<<"The area of rectangle is "<<area<<endl;
        }

        // checking continue or not is valid or invalid
        while(true)
        {
            cout<<"Do you wish to continue (y/n)? : ";
            cin>>answer;
            if(answer == 'y' || answer == 'n')
            {
                break;
            }else{
                cout<<"Invalid Answer !\n";
            }
        }
        
    }while(answer != 'n');

    return 0;
}