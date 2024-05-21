#include<iostream>
using namespace std;
template<class type1,class type2,class type3>
class numberadd
{
    type1 a;type2 b; type3 c;
public:
    numberadd(type1 a,type2 b,type3 c)
    {
        this->a=a;this->b=b;this->c=c;
        type2 sum;
        sum=a+b+c;
        cout<<"The sum of the numbers is  "<<sum;

    }
};
int main()
{
    numberadd<int,float,int> n1(2,2.5,2); // so you see here we mention those data type that we wanna pass , which may be any number depending upon the necessity of the program.
    return 0;

}
