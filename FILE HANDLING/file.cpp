//this is file handling only beginning
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout; ifstream fin; // here we are making object of both classes.
    fout.open("file.txt");
    fout<<"Amrit poudel";
    fout.close();
    fin.open("file.txt");
    char ch;
    do
    {
        ch=fin.get();
        cout<<ch;
    }while(!fin.eof());

}
