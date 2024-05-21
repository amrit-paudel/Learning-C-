// Question Here a and b are static member functions so they belong not only to any particular function but to whole classs so below when i try to set the value why it gave me a error

#include<iostream>

using namespace std;
class number
{
    private:
     static int a,b;
     static void setdata(int,int);
};

int main()
{
    int a,b;
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    setdata(a,b);
    return 0;
}
void number::setdata(int x,int y)
{
    a=x;
    b=y;
    cout<<"The sum of the numbers is "<<a+b<<endl;
}

