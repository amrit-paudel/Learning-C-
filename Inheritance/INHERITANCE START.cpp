//Look below we made tho classes but we were able to access the members of two classes from the same function.
#include<iostream>
using namespace std;
class a
{
private:
    int a;
public:
    void setdata(int x){a=x;}
    void showdata(){cout<<"The number is "<<a;}
};
class b:public a
{
private:
    int b;
public:
    void setvalue(int x){b=x;}
    void showvalue(){cout<<"The number is "<<b<<endl;}
};
int main()
{
    b obj;
    int a;
    cout<<"Enter a number \n";
    cin>>a;
    obj.setdata(a);
    obj.showdata();

    cout<<" \n Enter another number \n";
    cin>>a;
    obj.setvalue(a);// Since access specifier we used is public and both the function are public so we were able to access them.
    obj.showvalue();
    return 0;

}
