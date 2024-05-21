// A TRY TO CREATE AND WORK EITH A PURE VIRTUAL FUNCTION
#include<iostream>
using namespace std;
class number
{
public:
    int a,b;
    virtual void sum()=0;
};
class numbers:public number
{
    public:
    void setdata(int x, int y)
    {
        a=x;b=y;
    }
    void sum()
    {
        cout<<"The sum of the numbers is "<<a+b;
    }
};
int main()
{
    numbers n1;
    n1.setdata(2,3);
    n1.sum();
}
