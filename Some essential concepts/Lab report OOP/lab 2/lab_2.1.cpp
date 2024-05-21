#include<iostream>
#include<string>
using namespace std;
/*
  Write a program to set a structure to hold a date (mm,dd and yy), 
  assign values to the members of the structure 
  and print out the values in the format 11/28/2004 by function. 
  Pass the structure to the function
*/
// a Date struct to hold variables
// a printDate function to eventually print the date 
// getting the date values from the user

struct Date{
int month,day,year;
};

string printDate( struct Date& date ){
    return to_string(date.month)+"/"+ to_string(date.day) +"/"+to_string(date.year);
}

int main(){
    struct Date date;
    cout<<" Enter the year \n ";
    cin>>date.year;
    cout<<" Enter the month \n ";
    cin>>date.month;
    cout<<" Enter the day \n ";
    cin>>date.day;

    cout<<" The given date is "<< printDate( date );

}