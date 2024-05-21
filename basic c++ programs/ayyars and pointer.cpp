#include<iostream>
using namespace std;
int main()
{
     int sum=0;
    int num[5];
    cout<<"Enter the numbers to sum up"<<endl;
    for(int i=0;i<5;i++)
        cin>>num[i];
    for(int i=0;i<5;i++)

            sum=sum+*(num+i);
    cout<<"The sum of the numbers is "<<sum;
}
