//IN UNION MEMORY IS SHARED BY IT'S MEMBERS SO ONLY ONE MEMBERS CAN BE ACCSSED AT A TIME AND LATTER ONE WILL CASS THE LOSS OF DATA IF PREVIOUS ONE.
#include<iostream>
using namespace std;
union person
{
    int number;
    int salary;
};
int main ()
{
    person amrit;
    amrit.number=100;
    amrit.salary=200;
    cout<<amrit.salary; //but it was saud that only one member is accessible at a time
    //here both members are printed very  pproperly

    cout<<amrit.number;
}
