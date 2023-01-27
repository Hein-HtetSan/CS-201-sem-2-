#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream wfptr;
    wfptr.open("NEWFILE.txt",ios::out);
    wfptr<<"HELLO1$";
    wfptr<<"HELLO2$";
    wfptr.close();

    fstream rfptr;
    rfptr.open("NEWFILE.txt",ios::in);
    if(!rfptr)
    {
         cout<<"\nFile is not found";
    } 
    else
    {
        cout<<"\nIn File!!\n";
        while (!rfptr.eof())
        {
            char ch;
            rfptr>>ch;
            if(ch=='$')
            {
                cout<<endl;
            }
            else cout<<ch;
        
        } 
    }
    rfptr.close();
    return 0;
}