//continue stsement wirh for , while and do...while statement.
#include<iostream>
using namespace std;
void forr()
{
    int i;
    for(i=1;i<=10;i++)
    {
            if(i==5)
             continue;
        cout<<i<<endl;
    }



}
void doo()
{
    int i=1;;
    do
    {

        if(i==6){i++;continue;}
        cout<<i<<endl;
        i++;
    } while(i!=10);
}
void whilee()
{
    int i=1;
    while(i!=11)
    {
        if (i==6){i++;continue;}
        cout<<i<<endl;
        i++;
    }
}
int main()
{

    doo();
    return 0;
}
