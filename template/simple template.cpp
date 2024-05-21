#include<iostream>
using namespace std;
template<class x>
x add(x a,x b)
{
    cout<<"The sum is "<<a+b;
}
int main()
{
    add(2,3);
    return 0;
}
