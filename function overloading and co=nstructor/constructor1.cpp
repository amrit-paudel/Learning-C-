#include<iostream>
using namespace std;
class name
{
private:
    int num;
    public:
    name (int a)
    {
        num=a;
        cout<<"The number is "<<num;

    }


};
int main()
{
    int n,m;
    cout<<"Enter the number to pass to the object ";
    cin>>n;
    name n1(n);
    cout<<endl<<"Enter the number to pass to the object ";
    cin>>m;
    name n2(m);
}
