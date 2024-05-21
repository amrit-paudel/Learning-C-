#include<iostream>
using namespace std;
class numbers
{
    struct num {int a,b;}n;
public:
    void setdata(int x,int y)
    {
        n.a=x;n.b=y;
    }
    void sum()
    {
        cout<<"The sum of the number is "<<n.a+n.b;
    }
};
int main ()
{
    numbers n1;
    n1.setdata(6,4);
    n1.sum();
    return 0;
}
