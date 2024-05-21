//here using ternary operator ....
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the numbers to print it's divisors \n ";
    cin>>n;
    cout<<"Divisors \n";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
}
