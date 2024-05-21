#include<iostream>
using namespace std;
class number
{
protected: int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void sum()
    {
        cout<<" From the parent class The sum of the numbers is "<<a+b;
    }
};
class numbers:public number
{
    public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void sum()
    {
        cout<<" From the child class The sum of the numbers is "<<a+b;
    }
};
int main()
{
    number *ptr;
    numbers n1;
    ptr=&n1;  // HERE WE PASS THE ADDRESS OF NUMBERR CLASS TO A POINTER OF NUMBER TYPE....
    ptr->setdata(2,3);
    ptr->sum();
}
