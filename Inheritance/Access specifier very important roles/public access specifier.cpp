
#include<iostream>
using namespace std;
class number
{
public://Since it is public so it is easily accessible by the user , different story for private and protected.
    int a,b;

};
int main()
{
    number n;
    cout<<"Enter the number";
    cin>>n.a;
    cout<<"The number is "<<n.a;
    return 0;
}
