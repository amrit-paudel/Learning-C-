#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the numbers \n ";
    cin>>n1>>n2>>n3;
    int x;
    if(n1>n2&&n1>n3)
        x=10;
    if(n2>n3&&n2>n1)
        x=100;
    if(n3>n1&&n3>n2)
        x=1000;
    switch(x)
    {
    case 10:
        cout<<"Largest number : "<<n1;
        break;
    case 100:
        cout<<"largest number:"<<n2;
        break;
    case 1000:
        cout<<"Largest number :"<<n3;
        break;
    }

    return 0;
}
