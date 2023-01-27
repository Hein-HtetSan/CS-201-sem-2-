#include "iostream"
#include "fstream"

using namespace std;


int main()
{
    fstream file;
    int MAX = 20000;
    char texts[MAX];
    file.open("file1.txt", ios::out);
    cout<<"\nWrite to File...\n";
    cin.get(texts, MAX);
    file<<texts<<endl;
    file.close();

    fstream file2;
    file2.open("file1.txt", ios::in);
    if(!file2)
    {
        cout<<"File not found\n";
    }else{
        while(!file2.eof())
        {
            char ch;
            file2>>ch;
            cout<<ch;
        }
    }
    file2.close();
    return 0;
}