#include<iostream>
using namespace std;
class number
{
protected: int a,b;
public:
    virtual void setdata(int x,int y)
    {
        a=x;b=y;
    }
    virtual void sum()
    {
        cout<<" From the parent class The sum of the numbers is "<<a+b;
    }
};
class numbers:public number
{
    public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void sum()
    {
        cout<<" From the child class The sum of the numbers is "<<a+b;
    }
};
int main()
{
    number *ptr;
    numbers n1;
    ptr=&n1;// HERE SINCE WE PASS THE ADDRESS OF CHILD CLASS SO WE EXPECT TO GO IN TO CHILD CLSS NOT INB THE PARENT CLASS .
    ptr->setdata(2,3); //HERE *PTR IS OF NUMBER TYPE BUT ADDRESS STORED HERE IS OF NUMBERR CLASS TYPE ....
    //SO THERE TWO POSSIBLE WAYS OF BINDING
    //1) BY  LOOKING AT THE DATA TYPE OF THE POINTER WHICH C++ USUALLY DOES
    //2) BY LOOKING AT THE ADDRESS STORED IN THE POINTER VARIABLE.
    // AND BY VIRTUAL FUNCTION C++ ALLOWS US TO PERFORM THE LATE BINDING ....
    ptr->sum();
}
