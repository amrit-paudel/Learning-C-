#include<iostream>
using namespace std;
class number
{
    private:
     int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
            cout<<"The sum of the numbers is "<<a+b<<endl;
        }


};
int main()
{
    number n1;
    int a,b;
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    n1.setdata(a,b);
    return 0;
}


