// Function or constructor to be specific overloading is doing many task under the name of same finction name.
//Below is the perfect example of a constructor overloading.
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
    number(number &n)//Here if we do not do call by reference than we may come up with recurssion.
    {
        cout<<"The sum of the numbers is "<<n.a+n.b;
    }
    number(int x)
    {
        cout<<"The entered number is "<<x;
    }
    number(int x,int y)
    {
        cout<<"The sum of the numbers is "<<x+y;
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
    number n3(2);
    cout<<"Enter the numbers again to sum up";
    cin>>a>>b;
    number n4(a,b);
    return 0;
}
