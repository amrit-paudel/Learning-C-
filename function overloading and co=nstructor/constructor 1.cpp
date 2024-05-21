#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a=x;b=y;
    }
    number ()
    {

    }
    number(number &n)
    {
        cout<<"The sum of the numbers is "<<n.a+n.b;
    }
};
int main ()
{
      int a,b;
    number n2;
    cout<<"Enter the numbers to sum up";
    cin>>a>>b;
    n2.setdata(a,b);

    number n1(n2);
    return 0;
}
