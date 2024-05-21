//Property 2 of friend function.
//Here we need to understand that there is no much role of caller object for friend functon.
#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
        void setdata(int x,int y) {a=x;b=y;}
        void showdata(){cout<<a<<"  "<<b;}
        friend number operator+(number,number);

        };
number operator+(number n,number m)
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
    cout<<"Enter the numbers to sum up \n";
    cin>>a>>b;

    n1.setdata(a,b);
    cout<<"Enter the numbers again  to sum up \n";
    cin>>a>>b;
    n2.setdata(a,b);
    n3=n1+n2; // it is same as n3=n1.operator+(n2)//
    // BUT AS A FRIEND FUNCTION THERE IS NO NAY SIGNIFICANT ROLE OF THAT CALLER OBJECT .
    // SO FOR FRIEND FUNCTION SAME ABOVE EXPRESSION IS READ AS N3=OPERATOR+(N1,N2)
    n3.showdata();
    return 0;


}

