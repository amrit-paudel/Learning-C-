//Look below we made tho classes but we were able to access the members of two classes from the same function.
#include<iostream>
using namespace std;
class a
{
private:
    int a;
protected:
    void setdata(int x){a=x;}
    void showdata(){cout<<"The number is "<<a;}
};
class b:public a // To lekhnae bittakki class a ko sabai variabls and function inherit vau sakyo.
{
private:
    int b;
public:
    void setvalue(int x){b=x; setdata(b); showdata();;}  // Just have a look here setvalue function call setdata function and show data function which were protected.
    // so by creating object user in main function can assess the members of classes which are public only not to those which are private.
    // For protected  members we need to go through function step by step....


   // void showvalue(){cout<<"The number is "<<b<<endl;}
};
int main()
{
    b obj;
    int a;
    /*cout<<"Enter a number \n";        // Flow of logic here
                                        // main function to public function of child class.
      cin>>a;                           // public function to protected fnction of parent class.
                                        // in parent class protected function to private variables.
      obj.setdata(a);
      obj.showdata();*/

    cout<<" \n Enter another number \n";
    cin>>a;
    obj.setvalue(a);
   // obj.showvalue();
    return 0;

}
