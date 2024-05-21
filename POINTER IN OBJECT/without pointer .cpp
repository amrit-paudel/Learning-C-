#include<iostream>
using namespace std;
class number
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"The sum of the numbers is "<<a+b;
    }
};
int main ()
{
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    number n1;
    n1.setdata(a,b); // HERE NO NAY POINTER IS MADE FUNCTION IS CALLED BY JUST . OPERATOR
    n1.showdata();
    return 0;

}
