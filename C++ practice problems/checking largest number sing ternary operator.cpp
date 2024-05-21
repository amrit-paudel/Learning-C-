//here using ternary operator ....
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,largest;
    cout<<"Enter the numbers \n ";
    cin>>n1>>n2>>n3;
    largest=(n1>n2&&n1>n3)?n1:((n2>n3&&n2>n1)?n2:n3);
    cout<<"the largest among the numbers is "<<largest;

    return 0;
}
