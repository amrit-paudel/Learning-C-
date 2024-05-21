#include<iostream>
using namespace std;
class number
{
    int a,b;
public:
    void sum(int,int);
};
void number::sum(int x,int y)
{
    number::a=x;
    number::b=y;
    cout<<"The sum of the numbers is "<<a+b;
}
int main()
{
    number n1;
    n1.sum(2,3);
}
