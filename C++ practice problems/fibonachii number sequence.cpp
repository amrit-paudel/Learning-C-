//here using ternary operator ....
#include<iostream>
using namespace std;
int main()
{
    int n,n1=0,n2=1,temp,i;
    cout<<"Enter the number of terms of the fibonacci series !!!!!!!!!! \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<n1<<" ";//see all  these steps very caredully
        //why we do not print n2 here , why we print only n1??
        temp=n1+n2;
        n1=n2;
        n2=temp;
    }
}

