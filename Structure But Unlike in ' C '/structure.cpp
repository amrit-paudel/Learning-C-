#include<iostream>
using namespace std;
struct name
{
    char nam[100];

};
int main ()
{
    name n1;
    cout<<"Enter the name \n ";
    cin>>n1.nam;
    cout<<"The name is "<<n1.nam<<endl;
    return 0;

}
