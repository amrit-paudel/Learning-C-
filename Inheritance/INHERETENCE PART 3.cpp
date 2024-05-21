#include<iostream>
using namespace std;
class number
{
public:
    int a,b;
    int setvalue(int x, int y)
    {
        a=x;b=y;
        return a+b;
    }
};
class numberr:protected number
{
    public:
    int c,d;
    int setdata(int x,int y)
    {
        int sum=setvalue(x,y);
        c=x;d=y;
        sum=sum+c+d;
        return sum;
    }

};
int main ()
{
    numberr n1;
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    n1.setdata(a,b);
    cout<<"Enter two numbers again ";
    cin>>a>>b;
    int sum=n1.setdata(a,b);
    cout<<"The sum of the numbers is "<<sum;
    return 0;

}
