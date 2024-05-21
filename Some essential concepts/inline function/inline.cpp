#include<iostream>
using namespace std;

inline int sumNum(int& num1,int& num2){
    return num1+num2;
}

int main(){

    int num1,num2;
    num1=100;
    num2=200;

    cout<<"By using inline function The sum of two numbers is "<<sumNum(num1,num2);

}