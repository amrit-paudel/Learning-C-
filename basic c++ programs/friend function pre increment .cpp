#include<iostream>
using namespace std;
class number
{
protected:// HERE TRY BY REMOVING PROTECTED AND WRITE PRIVATE AND READ THE EREROR , AND READ THE AVAILABLITY AND ACCESSIBILITY OF THE NOTE BOOK.
    int a,b;
};

class numberr:public number
{
private:
    int c,d;
    public:
    setvalue(int x,int y,int z,int p)
    {
        c=x;d=y;a=z;b=p;
    }
    public:
    showvalue()
    {
        cout<<"The numbers are "<<a<<b<<c<<d;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the numbers ";
    cin>>a>>b>>c>>d;
    numberr n1;
    n1.setvalue(a,b,c,d);
    n1.showvalue();

}
