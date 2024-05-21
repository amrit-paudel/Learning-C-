
/*
Assume that employee will have to pay 10 percent income tax 
to the government. Ask user to enter the employee salary. 
Use inline function to display the net payment to the employee 
by the company.
*/

#include<iostream>
#include<string>

using namespace std;

// this function returns the net payment
inline float netPayment( float& employeeSalary ){
    return employeeSalary-(0.10*employeeSalary);
}

int main(){
    float employeeSalary;
    cout<<" Enter the Employee Salary ?\n ";
    cin>>employeeSalary;

    cout<<" The Net payment is : "<<netPayment(employeeSalary);
}