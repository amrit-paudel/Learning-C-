#include<iostream>
using namespace std;
int main ()
{
    int n,count=0;
    cout<<"Enter the number of terms to print the prime numbers"<<endl<<endl<<endl;
    cin>>n;
    int i;
    for(i=2;i<=n;i++)
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
