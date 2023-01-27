#include "iostream"
#include "stdlib.h"
#include <fstream>

using namespace std;

void print_ASCII_toFile();

int main()
{
    print_ASCII_toFile();
    return 0;
}

void print_ASCII_toFile()
{
    ofstream file;
    file.open("filename.txt");

    if(file.fail())
    {
        cout<<"File cann't open !\n";
    }else{
        for(int i=0; i<126; i++)
        {
            file << static_cast<char>(i)<<" = "<< i << endl;
        }
        cout<<"Successfully written to the file!\n";
    }
    file.close();
}