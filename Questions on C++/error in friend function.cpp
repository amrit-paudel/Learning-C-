#include<iostream>
using namespace std;
class number
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
friend operator++(number);
};
operator ++(number n)
{
    int c,d;
    c=++n.a;
    d=++n.b;
    cout<<c<<"  "<<d;
}
int main ()
{
    int a,b;
    cout<<"Enter the numbers \n";
    cin>>a>>b;
    number n1;
    n1.setdata(a,b);
    ++n1; // meaning same as    operator++(n1)
    return 0;

}
