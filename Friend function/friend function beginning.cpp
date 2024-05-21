// friend function
// it;s mian property i that it can access the private and protected members of the object.

#include<iostream>
using namespace std;
class number
{
    public:
    int a,b;
    void setdata(int  x ,int y )
    {
        a=x;b=y;
    }
     add()
     {
         cout<<"The sum of the numbers is "<<a+b;
     }
     void display();
};
void display()//but generally without passing the objects as an arguements friend functio is not that useful
{
    number n1;
    n1.setdata(2,3);
    n1.add();
}
int main()
{
   display();
}
