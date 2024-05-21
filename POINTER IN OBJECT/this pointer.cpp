// Actually this pointer is created in order to avoid the problem of naming conflict of variables
//SO THAT WE COULD USE SAME NAME OF VARIABLE WHICH ALSO HELPS US TO WORK WITH THE SAME NAME AGAIN AND AGAIN
//IT IS ONE OF THE USE OF THIS FUNCTION INLY.
#include<iostream>
using namespace std;
class number
{
private:
    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;this->b=b;//HERE THIS POINTER POINTS THE INSTANCE MEMBER VARIABLES OF THE CLASS WHOSE ADDRESS IS INSIDE IT.
    }
    void showdata()
    {
        cout<<"The sum of the numbers is "<<a+b;
    }
};
int main ()
{
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    number n1,*p;
    p=&n1;
    p->setdata(a,b); // HERE THAT OBJECT WILL CALL THE SETDATA AND SHOW DTA FUNCTION WHICH IS POINTD BY THE POINTER.
    p->showdata();// HERE SETDATA FUNCTION OF THAT OBJECT IS ACTIVATED OR THAT ONE GETS MEMORY WHICH ONE IS POINTED BY THE POINTER
    return 0;

}
