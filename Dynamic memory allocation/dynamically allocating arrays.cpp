#include<iostream>
using namespace std;
int main ()
{
    int *ptr=new int[5];
    int i,sum=0;
    cout<<"Enter the numbers to put in to the array to sum up \n";
    for(i=0;i<5;i++)
        cin>>*(ptr+i);
    for(i=0;i<5;i++)

        sum=sum+*(ptr+i);
   cout<<"The sum of the numbers is "<<sum;
   delete ptr;


}
