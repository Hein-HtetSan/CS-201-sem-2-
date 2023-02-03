#include "iostream"
using namespace std;

struct Distance
{
    /* data */
    int feet;
    int inch;
};

void display(Distance);
void scale(Distance, float);


int main()
{

    Distance d1;
    cout<<"Enter distance : \n";
    cout<<"Feet : ";
    cin>>d1.feet;
    cout<<"\nInches : ";
    cin>>d1.inch;

    cout<<"Original Distance : \n";
    display(d1);

    scale(d1, 0.5);

    cout<<"After Distance : \n";
    display(d1);

    return 0;
}

void display(Distance dd)
{
    cout<<dd.feet<<"\' "<<dd.inch<<"\" "<<endl;
}

void scale(Distance dd, float f)
{
    float inch = (dd.feet*12 + dd.inch)*f;
    dd.feet = static_cast<int>(inch/12);
    dd.inch = inch - dd.feet * 12;

    cout<<"Scale Distance : \n";
    display(dd);
    cout<<endl;
}