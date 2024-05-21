#include<iostream>
using namespace std;
template <class type1,class type2>
class multiple
{
    type1 a;type2 b;
public:
    multiple(type1 a,type2 b)
    {
        this->a=a;this->b=b;
        cout<<"The entered values are a: "<<a<<endl;
        cout<<"The entered values are b:"<<b<<endl;
    }
};
int main ()
{
    multiple <int,float> o1(2,2.3);
    multiple <int,string> o2(2,"Amrit");
    multiple <float,float> o3(2.22,2.3);
    multiple <string,string> o4("Amrit","poudel");

}
