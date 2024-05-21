#include <iostream>
#include<string>

using namespace std;
class Intro{
    private:
    string name;
    int number;

    public:
    Intro(string name, int number){
        this->name=name;
        this->number=number;
    }

    Intro(){

    };

    void showValue(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Number : "<<this->number<<endl;
    }

};

int main(){
    int* num1=new int(100);
    int* num2=new int(200);

    delete num1;
    delete num2;

    cout<<*num1;
}
