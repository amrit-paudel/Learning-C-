//here i will be showing the destructor
//Also keep in mind that destructor is the last thing that runs before the destruction of an object.....
#include<iostream>
using namespace std;
class number
{
    int a,b;
public:
    number (int x, int y)
    {
      a=x;b=y;
    }
    ~number()//ALSO KEEP IN MIND THAT DESTRUCTOR TAKES NO ANY ARGUEMENTS...
    {
        cout<<"The sum of the numbers from the destructor is "<<a+b;
    }
};
int main ()
{
    number n1(2,3);
    return 0;
}
