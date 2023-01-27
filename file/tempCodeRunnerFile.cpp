#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,k;
    double x;
    FILE *inptr;
    inptr=fopen("file.txt","r");
    fscanf(inptr,"%d",&i);
    fscanf(inptr,"%d%lf",&k,&x);
    fclose(inptr);

    cout<<i<<endl<<k<<endl<<x;
    return 0;
}