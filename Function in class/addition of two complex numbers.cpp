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
    void add (complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        cout<<"the sum of the complex nmber is "<<endl<<temp.real<<","<<temp.img;
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
c1.add(c2);
}
