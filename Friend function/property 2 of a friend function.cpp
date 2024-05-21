//GENRALLY THERE IS NOT MUCH USE OF CALLER OBJECT IN FRIEND FUNCTION.....
#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
        void setdata(int x, int y){a=x;b=y;}
        void showdata(){cout<<a<<"and"<<b;}
friend number operator+(number,number);
};
number operator+(number n, number m)
{
    number temp;
    temp.a=n.a+m.a;
    temp.b=n.b+m.b;
    return temp;
}
int main ()
{
    number n1,n2,n3;
    int a,b;
    cout<<"Enter the 1st set of numbers to sum up \n";
    cin>>a>>b;
    n1.setdata(a,b);
    cout<<"Enter the 2nd set of numbers to sum up \n";
    cin>>a>>b;
    n2.setdata(a,b);
    n3=n1+n2; // For friend function it is read as n3=number operator+(n1,n2)
    n3.showdata();

}
