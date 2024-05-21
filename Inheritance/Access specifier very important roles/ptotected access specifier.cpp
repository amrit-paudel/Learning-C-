// The private sccess specifier guranties to provide access to the user 2 which inherit the parent class.
#include<iostream>
using namespace std;
class number
{
    protected: int a,b;

};
class numberr:protected number
{
public:
    setdata(int x,int y)
    {
        a=x;b=y;
    }
    showdata()
    {
        cout<<"the numbers are "<<a<<b;
    }
};
int main ()
{
    numberr n1;
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    n1.setdata(a,b);
    n1.showdata();
    return 0;
}
