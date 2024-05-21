//PASSING AN ARRAY TO  A function
// WE WILL ALSO SEE HOW ARRAY AND POINTERS ARE VERY CLOSLY CONNECTED
// WE CAN ACCESS WHOLE ARRAY IF WE KNOW THE BASE ADDRESS OF AN ARRAY BY POINTER ARITHMATIC.
// Arrays always consumes the memory in increased well manared order.
#include<iostream>
using namespace std;

int sum(int *p)
{
    int s=0,i=1;
    for(i=0;i<5;i++)
        s=s+*(p+i);
    return s;
}

int main ()
{
    int num[5];
    cout<<"Enter the numbers to sum up !!!!";
    for(int i=0;i<5;i++)
        cin>>num[i];
    cout<<"The sum of the numbers is "<<sum(num);//it is same as writting sum(num[0])


}
