#include<iostream>
using namespace std;
class number
{
protected: int a,b;
public:
    virtual void setdata(int x,int y)
    {
        a=x;b=y;
    }
    virtual void sum()
    {
        cout<<" From the parent class The sum of the numbers is "<<a+b;
    }
};
class numbers:public number
{
    public:
    void setdata(int x,int y) //we do vitual so that we would get outr pointer to that where there is the address.
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
    ptr=&n1;// HERE SINCE WE PASS THE ADDRESS OF CHILD CLASS SO WE EXPECT TO GO IN TO CHILD CLSS NOT INB THE PARENT CLASS .
    ptr->setdata(2,3);
    ptr->sum();
}
