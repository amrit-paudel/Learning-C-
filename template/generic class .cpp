//GENERIC CLASS
#include<iostream>
using namespace std;
template<class type1>
class number
{
private:
    type1 a,b;
public:
    void sum(type1 x,type1 y)
    {
        a=x;b=y;
        cout<<"sum of the numbers is "<<a + b;
    }
};
int main ()
{
    number <string>n1; //thus creating a generic class we may work with any type of data type !!!!
    string a,b;
    cout<<"Enter the strings "<<endl;
    cin>>a>>b;
    n1.sum(a,b);
}
