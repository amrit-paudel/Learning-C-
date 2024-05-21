#include<iostream>
using namespace std;
template<class type>
class number
{
private:
    type a,b;
public:
    number (type x , type y)
    {
        a=x;b=y;
        cout<<"a is "<<a<<" and b is "<<b;
        cout<<"The sum of the numbers is "<<a+b;
    }
    number ()
    {

    }
    void sum(type x,type y)
    {
        a=x;b=y;
        cout<<"Sum of numbers is "<<a+b;
    }

};
int main()
{
    number <int> n1(2,3);
    number <int>n2;
    n2.sum(6,6);
}

