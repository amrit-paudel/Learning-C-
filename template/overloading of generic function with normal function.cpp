//A BEAUTIFUL OVERLOADING OF GENERIC FUNCTION WITH A NORMAL FUNCTION


#include<iostream>
using namespace std;

template<class x>
void generic(x a)
{
    cout<<"printing from the generic function"<<endl;
    cout<<a<<endl;

}
void generic(int a)
{
    cout<<"printing from inside the normal function"<<endl;
    cout<<a<<endl;
}
int main ()
{
    generic(22);
    generic(33.33);
    generic("Amrit Paudel");
}
