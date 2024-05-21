#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,count=0;
    cout<<"Enter the numbers to check the primes in between"<<endl;
    cin>>n1>>n2;
    int i;
    for(i=n1;i<=n2;i++)
    {
        int j=i;
        for(j=2;j<=i;j++)
            if(i%j==0)
            break;

        if(j==i)
        {
            count++;
             cout<<i<<endl;
        }




    }
    cout<<"Total number of primes were :"<<count<<endl;
}

