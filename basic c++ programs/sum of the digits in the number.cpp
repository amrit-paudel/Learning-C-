#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem,i;
    cout<<"Enter a number to reverse ";
    cin>>num;
    cout<<"Before reversing the number was "<<num<<endl;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;

    }
    cout<<"After reversing the number is "<<sum;

}
