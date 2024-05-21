#include<iostream>
#include<string>

using namespace std;

class Parent{
    private:
    int num1;
    string name1;

    public:
    Parent( int num1, string name1 ){
        this->num1=num1;
        this->name1=name1;
        cout<<" Parent class Constructor called \n ";
    };
    
    string getName(){
        return this->name1;
    }

    int getNum(){
        return this->num1;
    }

};

class Child : public Parent{
    public:
    Child( int num1, string name1  ):Parent( num1,name1 ){
        cout<<"Child class constructor called \n ";
    }

};

int main(){
    Child child_obj( 100 , "Amrit poudel" );
    cout<<child_obj.getNum() <<endl;
    cout<<child_obj.getName()<<endl;


}
