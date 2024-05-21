#include<iostream>
#include<conio.h>
using namespace std;
class time
{
public:
    int hr,mine,sec;
    void settime()
    {
        cout<<"Enter the hour \n minutes \n and second ";
        cin>>hr>>mine>>sec;

    }
    void displaytime()
    {
        cout<<"The time is as below";
        cout<<hr<<":"<<mine<<":"<<sec;
    }
};
int main ()
{
    time t;
    t.settime();
    t.displaytime();
    getch();
}
