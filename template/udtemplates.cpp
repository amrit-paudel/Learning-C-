#include<iostream>
using namespace std;
template <class udt1,class udt2,class udt3>
udt3 sum(udt1 a,udt2 b)//REMEMBER WE HAVE TO PASS SAME TYPR OF DATA I.E WE CANNOT PASS ONE INTEGER AND ONE FLOAT TYPE OF DATA
{
    return(a+b);
}
int main()
{
    cout<<"Enter the numbers to sum up";
    int a;float b;
    cin>>a>>b;
    cout<<"The sum of the number is "<<sum(a,b);
}
