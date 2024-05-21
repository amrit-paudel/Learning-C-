
// constructor are called in the same
// order in which the parent classes are inherited to the
// child classes


// below change the order of inheritane of parent classes
// to the child classes and see the result of
// order of constructor calling 

#include<iostream>
#include<string>

using namespace std;

// just a simple program of multiple inheritance


// let us write a name in very first and let us
// access that name from a later child class
// also we will see the order of constructor call
class First_parent{
    private:
    string name=" Amrit poudel ";

    public:
    First_parent(){
        cout<<" Constructor of first class is called \n ";
    }

    string get_name(){ return this->name; }
};

class Second_parent{
    public:
    Second_parent(){
        cout<<" Constructor of second class is called \n ";
    }
};

class Third_parent{
    public:
    Third_parent(){
        cout<<" Constructor of third class is called \n ";
    }
};

class Child:public Third_parent , public Second_parent , public First_parent{
    private:
    int num;

    public:
    Child(int num):Second_parent(),First_parent(),Third_parent(){
        cout<<" Constructor of child class is called \n ";
        this->num=num;
        
    }
};

int main(){
    Child child_obj(100);

    cout<<child_obj.get_name()<<endl;

}
