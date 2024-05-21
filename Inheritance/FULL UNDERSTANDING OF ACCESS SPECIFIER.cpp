// Here it will give error because see below
#include<iostream>
using namespace std;
class number
{
    public:
    int a,b;
};
class numberr:protected number// here the member of class number are inherited as private so they are not accessed from the user 2 or child class.
{
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"The number are "<<a<<b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    numberr n1;
    n1.setdata(a,b);

    n1.showdata();
    return 0;

}
