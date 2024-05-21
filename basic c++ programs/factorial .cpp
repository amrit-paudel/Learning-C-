#include<iostream>
using namespace std;
int main()
{
    int sum=0,num,rem,i;
    cout<<"Enter a number to sum up it's digits ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    cout<<"The sum of the digits within number is "<<sum;
    return 0;
}
