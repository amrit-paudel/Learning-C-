#include<iostream>
using namespace std;
template <class x,class y>
x add(x a,y b)
{
    cout<<"Sum of the numbers is "<<a+b;
}
int main()
{
    add(2,3.5);// HERE WE ARE TRANSFERRING ONE INT TYPE AND ONR DOUBLE TYPE IT WORKS WELL BECAUSE WE HAVE DEFINED TWO DIFFERENT TYPR OF PLACEHOLDRS SO COMPILER WILL IDENTIFY IT AS INTTYPE AND ANOTHER AS FLOAT TYPE.
    return 0;
}
