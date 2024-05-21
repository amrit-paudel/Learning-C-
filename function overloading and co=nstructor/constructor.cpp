#include<iostream>
using namespace std;
class name
{
private:
    int num;
    public:
    name (int a)
    {
        num=a;
        cout<<"The number is "<<num;

    }


};
int main()
{
    int n,m;
    cout<<"Enter the number to pass to the object ";
    cin>>n;
    name n1(n);//we declare an object n1 and we pass vlaue of n to the  function called by that object.
    cout<<endl<<"Enter the number to pass to the object ";
    cin>>m;
    name n2(m);//Declaring and calling objext is done at once very easily and since coindtructor is a specian type of function with no any return typoe so no need to worrry about the retuyrn type vlue.
}
