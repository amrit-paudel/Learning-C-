//read this and try to visualize it....
#include<iostream>
using namespace std;
template <class type1,class type2>//we may define any number of user defined like data types based on our work.....
class multiple
{
    type1 a;type2 b;//here declaring any number of variables .
public:
    multiple(type1 a,type2 b)//we would use this pointer so here we have also declared same type of variables...
    {
        this->a=a;this->b=b;//using this pointer because it is there and we just ned to use it
        cout<<"The entered values are a: "<<a<<endl;
        cout<<"The entered values are b:"<<b<<endl;
    }
};
int main ()
{
    multiple <int,float> o1(2,2.3);
    multiple <int,string> o2(2,"Amrit");   // benefit of constructor we can define a object and pass arguements at the same time ....
    multiple <float,float> o3(2.22,2.3);
    multiple <string,string> o4("Amrit","poudel");

}
