/*
Write a program using the function overloading that converts feet to inches. 
Use function with no argument, one argument and two arguments.
 Decide yourself the types of arguments. Use pass by reference in any one of the function above.
*/

#include<iostream>
#include<string>
using namespace std;


float feetToInch( float& feetValue ){
    return feetValue*12;
};

void feetToInch( float& feetValue1 , float& feetValue2){
    cout<<" The Value of "<<feetValue1<<" in inch is"<<feetValue1*12;
    cout<<" The Value of "<<feetValue2<<" in inch is"<<feetValue2*12;
};

void feetToInch(){
    float feetValue=5;
    cout<<" The value of feet in inch is "<<feetValue*12;
}



int main(){
    float feetValue,feetValue1, feetValue2;
    feetValue=1;
    feetValue1=2;
    feetValue2=3;

    // function with one arguement
    cout<<" The value of "<<feetValue<<" in Inch is "<<feetToInch(feetValue)<<endl;
    
    //function with two arguement
    feetToInch(feetValue1,feetValue2);

    //function with no arguement
    feetToInch();
}