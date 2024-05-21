//OVERLOADING A GENERIC FUNCTION
#include<iostream>
using namespace std;
template<class d>
d add(d a,d b)
{
    cout<<"We wre under generic function \n";
    return(a+b);
}

template <class t,class s>
s add(t a,s b)
{
    cout<<"Inside a generic function";
    return(a+b);
}

int main()
{
    cout<<"The sum of numbers is "<<add(2,3)<<endl;
    cout<<"The sum of the numbers is "<<add(2,3.5)<<endl;
    cout<<"The sum of the nbumbers is "<<add(3.5,2.5)<<endl;

}
