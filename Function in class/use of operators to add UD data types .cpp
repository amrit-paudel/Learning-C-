#include<iostream>
using namespace std;
class complex
{
private:
    int real,img;
public:
    setdata(int x,int y)
    {
        real=x;img=y;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void showdata()
    {
        cout<<"The sum of the complex numbers is "<<real<<","<<img;
    }

};
int main()
{
complex c1,c2,c3;
int r,i,re,im;
cout<<"Enter the value of real and imaginery part of the first complex number "<<endl;
cin>>r>>i;
c1.setdata(r,i);
cout<<"Enter thr real and imaginery of the second complex number";
cin>>re>>im;
c2.setdata(re,im);
c3=c1+c2;  // Wouldnot it be so good if we were able to write c1+c2 directly, well in c++ that is also possible.
// Here values comes in c3 object but since we have defined real and img as private we will not be able to access them now also we have to use another function to access them.
c3.showdata();
}

