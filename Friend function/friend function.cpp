// GENERAL PROPERTY OF CLASS FUNCTION
#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
    friend void sum(number);
    void setdata(int x,int y)
    {
        a=x;b=y;
    }

};
void sum(number c)
{
    int sum;
    sum=c.a+c.b; // here also it is accessing the private members of the clss only possible becaues it is a friend funcction ...
    cout<<"The sum of the given numbers is "<<sum;
}
int main ()
{
    number n1;
    int a,b;
    cout<<"Enter the numbers \n";
    cin>>a>>b;
    n1.setdata(a,b);// VALUE IS GENERALLY PASSED THROUGH FUNCIOIN BECAUSE THE VARIABLES ARE UNDER PRIVATE IN THE CLASS
    sum(n1);
    return 0;

}
