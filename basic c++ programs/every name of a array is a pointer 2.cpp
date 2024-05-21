//THIS IS THE RELATIONSHIP BETWEEN THE ARRAY AND POINTERS
//THE NAME OF AN ARRAY IS ACTUALLY A POINTR VARIABLE POINTING THE VRY FIRST ELEMEMT OF AN ARRAY.

#include<iostream>
using namespace std;
void summ(int *p)
{
    int sum=0,i;
    for(i=0;i<5;i++)
        sum=sum+*(p+i);
    cout<<"The sum of the numbers is "<<sum;
}

int main()
{
     int sum=0;
    int num[5];
    cout<<"Enter the numbers to sum up"<<endl;
    for(int i=0;i<5;i++)
        cin>>num[i];
    summ(num);
}
