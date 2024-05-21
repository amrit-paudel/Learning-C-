#include<iostream>
using namespace std;
class complex
{
private:
    int real,img;
public:
    setdata(int x, int y)
    {
        real=x;img=y;
    }
    complex operator-()
    {
        complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
    showdata()
    {
        cout<<real<<"  "<<img;
    }
};
int main ()

{
    int a,b;
    cout<<"Enter the numbers to change their sign ";
    cin>>a>>b;
    complex c1,c2;
    c1.setdata(a,b); //c1 object maa value gayo.
    c2=-c1;  // c2 object maa c1 ko negative value gayo.
    c2.showdata();  // c2 object maa showdata call vayo. raa hami lai  value diyo . But tyo class maa chai showdta function xaa so c1 maa pani showdata function banyaa hola vannae sawal aaunaa sakxaa , yesko answer sayad banyaa hoinaa hola because class maa showdata seclare garaa pani teslai call garae paxi matrai teslai ram maa memory milnae hola hai.


}
