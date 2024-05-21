//NEW KEYWORD WILL ALLOCATE THE MEMORY FOR ANY SPECIFIED DATA TYPE AND IT WILL RETURN US THE ADDRESS OF THAT ALLOCATED MEMORY.
//ONCE WE FINISHED WITH OUR ALLOCATED WE ALSO  NEED TO FREE THAT MEMOKRY USING DELETE KEYWORD.
#include<iostream>
using namespace std;
int main ()
{
    int *ptr;
    ptr=new int;
    cout<<"Enter the value to be stord in our allocated memory \n";
    cin>>*ptr;
    cout<<"Stored value is "<<*ptr;
    delete ptr;
    return 0;

}
