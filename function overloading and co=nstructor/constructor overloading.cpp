/* Perfect example of constructor overloading*/

#include<iostream>
using namespace std;
int area (int a)
{
    return (3.14*a*a);
}
int area (int a,int b)
{
    return (a*b);
}
int main()
{
    int a,b,r;
    cout<<"Enter the value of length and breadth of the rectangle to find out the  area"<<endl;
    cin>>a>>b;
    cout<<"Enter the radius of the circle to calculate the  area ";
    cin>>r;
    int rect,circle;
    rect=area(a,b);
    circle=area(r);
    cout<<"The area of the circle is "<<circle<<endl;
    cout<<"the area of the rectangle is "<<rect<<endl;

}
