// So basicaly a class with public access specifier is same as that of structurein c language. But has not proper security of data so often we fill the data by the help of functions.

#include<iostream>
using namespace std;
class number
{
public:
    int a,b;
};
int main ()
{
    number n;
    int sum;
    cout<<"Enter two numbers to sum up \n";
    cin>>n.a>>n.b;
    sum=n.a+n.b;
    cout<<"The sum of the numbers is "<<sum;
    return 0;

}


