#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
        setdata(int x, int y)
        {
            a=x;b=y;
        }
        number operator++()
        {
            number temp;
            temp.a=++a;
            temp.b=++b;
            return temp;
        }
        showdata()
        {
            cout<<a <<" "<<b;
        }

};
int main ()
{
    int a,b;
    cout<<"Enter the numbers for pre increment ";
    cin>>a>>b;
    number n1,n2;
    n1.setdata(a,b);
    n2=++n1;  // HERE N1 IS CALLED
    n2.showdata();


}
