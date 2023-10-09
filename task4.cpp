#include<iostream>
using namespace std;

string projectTimeCalculation(float  hours, float days, float w);
main()
{
    float hours,days,w;
    string total;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of days: ";
    cin>>days;
    cout<<"Enter the number of workers: ";
    cin>>w;
    total=projectTimeCalculation(hours , days ,w );
    cout<<total;
}
string projectTimeCalculation(float hours, float days, float w)
{
    
    int  remaining;    
    float totalh=(0.9* days * w *10 );
    remaining=hours-totalh;
    if(totalh<hours)
    {
        cout<< "not enough time"<< remaining;
    }
    else
    cout<<"Enough time"<< remaining ;
    
}