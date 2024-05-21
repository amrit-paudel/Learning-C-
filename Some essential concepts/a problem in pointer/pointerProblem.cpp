#include<iostream>
using namespace std;


int main(){

    int nums[]={10,20};
    cout<<*(&nums+1)-nums<<endl;  
   /* here it is said that 
    *(&nums+1) represents the address of memory space just after the array
    last element. But for that isn't (&nums+1) only sufficient, what is the
    need of that *
    */

    cout<<(&nums+1)-(&nums)<<endl;
   /*  how is this one differ from the upper one */

   /* cout<<nums<<endl;
    cout<<&nums<<endl;
    cout<<&nums[0]; */  // these all gives us the same base address


}


    
