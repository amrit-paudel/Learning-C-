//Property 1: We can declare friend function in more than one class.
#include<iostream>
using namespace std;
class numbeer;
//Actually this is a forward declaration it is very important to tell the compiler that numbeer class is also present in the program.

class number
{
private:
    int a,b;
    public:
    void setdata(int x,int y){a=x;b=y;}
    friend void sum(number,numbeer);
};
class numbeer
{
private:
    int a,b;
public:
    void setdata(int x,int y) {a=x;b=y;}
    friend void sum(number,numbeer);
};
void sum(number n1,numbeer n2)
{
    int sum;
    sum=n1.a+n1.b+n2.a+n2.b;
    cout<<"The sum of the numbers is "<<sum;

}
int main()
{
    number n;
    numbeer m;
    int a,b;
    cout<<"Enter the numbers to sum up ";
    cin>>a>>b;
    n.setdata(a,b);
    cout<<"Enter the numbers to sum up ";
    cin>>a>>b;
    m.setdata(a,b);
    sum(n,m);

}


