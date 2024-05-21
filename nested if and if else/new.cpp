#include<iostream>
using namespace std;
// NESTED IF AND NESTED IF ELSE ALONG WITH ELSE IF STATEMENTS.
void nestedif()
{
        int a;
    cout<<"Enter a number , integer to be more precisly !!!!!!";
    cin>>a;
    if(a>0)
        cout<<"Only first step of nesting \n ";
        if(a>3)
        cout<<"Secind nesting";
           if(a>5)
           cout<<"Third nesting ";
              if(a>9)
                cout<<"oop's that's a lot of nesting !!!!";
    else
        cout<<"No any nesting !!!! \n";
}
void nestedelse()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    if(a>9)
        cout<<"Very first step \n";
       else if(a==10)
        cout<<"Second step \n";
          else if(a==11)
             cout<<"Third step \n ";
    else
        cout<<"a is < 9";


}
int main ()
{
    nestedif ();
    nestedelse();
    return 0;

}

