#include<iostream>
#include<string>
using namespace std;


// The sole purpose of Encapsulation is to 
//avoid the access of variables of classes from outside the class

class Intro{
    private:
    string name,addr;
    int number;

    public:
    // Constructor
    // A constructor itself is a setter 
    Intro( string name,string addr,int number ){
        this->name=name;
        this->addr=addr;
        this->number=number;
    }


    // getter
    // to get those data / values

string getter(string getting_value_name){
    if(getting_value_name=="name"){return this->name;}
    else if(getting_value_name=="addr"){return this->addr;}
    else if(getting_value_name=="number"){return to_string(this->number) ;}

}


};

int main(){
    Intro amrit( "Amrit poudel", "Ratnanagar, Chitwan",9840505111 );
    cout<<amrit.getter("name")<<endl;
    cout<<amrit.getter("addr")<<endl;
    cout<<amrit.getter("number")<<endl;

}






