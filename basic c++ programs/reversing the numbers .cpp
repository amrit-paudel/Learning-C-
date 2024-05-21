#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter a number \n";
   int num;
   cin>>num;
   (num==0)?(cout<<"Zero in neither positive nor negative"):((num>0)?(cout<<"Positive number"):(cout<<"Negative number"));

}
