// To know how friend function links the objects variable and it's functin's operation just remove the name below and reead the error.
#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
    public:
        void setdata(int x, int y){a=x;b=y;}
        void showdata(){cout<<a<<" "<<b;}
        friend number operator++(number); // Because of this declaration friend function is able to access the private variables.


};
//also cut the declaration part of the friend function ans see the error , so decleration is the way how friend function can access those private variables.

number operator++(number n)
{
    number temp;
    temp.a=++n.a;
    temp.b=++n.b;
    return temp;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers to increase \n ";
    cin>>a>>b;
    number n1,n2;
    n1.setdata(a,b);
    n2=++n1;
    n2.showdata();
    return 0;
}
