#include<iostream>
#include<string>
using namespace std;

class Intro{
    private:
    string name,addr;
    int number;

    public:
    Intro( string name_, string addr_, int number_ ){
        name=name_;
        addr=addr_;
        number=number_;
    };

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<addr<<endl;
        cout<<"Number: "<<number<<endl;
    }

};

int main(){
    Intro amrit( "Amrit poudel", "Ratnanagar, Chitwan",9840505111 );
    amrit.display();
}
