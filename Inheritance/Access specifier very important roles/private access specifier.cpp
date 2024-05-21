

#include<iostream>
using namespace std;
class number
{
private:
    int a,b;//it means that variables are accessible only within classes .
public:// it means the function is accessible to the user
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"The numbers are "<<a<<" and "<<b;
    }

};
int main()
{
    number n;
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    n.setdata(a,b);
    n.showdata();
    return 0;
}
