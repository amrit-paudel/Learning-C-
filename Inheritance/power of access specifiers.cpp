#include<iostream>
using namespace std;
class number
{
    int a,b;
protected:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void sum()
    {
        cout<<"The sum of the numbers is "<<a+b;
    }
};
class numbers:public number
{
public:
    void setvalue(int x,int y)
    {
        setdata(x,y);
    }
    void summ()
    {
        sum();
    }
};
int main()
{
    numbers n1;
    n1.setvalue(2,3);
    n1.summ();
}
