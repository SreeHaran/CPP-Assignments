//C++ program to read time in seconds and convert in time format (HH:MM:SS) using class

#include <iostream>
using namespace std;

class Time
{
    public:
    int t, hours, mins, sec;
    void timeConversion(int);
};

void Time:: timeConversion(int t)
{
    hours = t/(60*60); 
    mins = (t%(60*60))/60; 
    sec = t -((hours*60*60)+(mins*60));
    cout<<"Time is in hours:- "<<hours<<":"<<mins<<":"<<sec<<endl;
}

int main()
{
    int t;
    cout<<"Enter the time seconds: "; 
    cin>>t;
    Time time1;
    time1.timeConversion(t);
    return 0;
}
