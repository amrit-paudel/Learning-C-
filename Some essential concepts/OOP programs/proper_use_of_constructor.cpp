// Very First program by proper use of Constructor

#include<iostream>
#include<string>

using namespace std;

class MobilePhone{
    private:
    string model, price, size, name;

    public:
    MobilePhone( string name, string model, string price, string size ){
        this->name=name;
        this->model=model;
        this->price=price;
        this->size=size;
    };

    // Now getter
    // use best practice
    
    string getName(){
        return this->name;
    };

    string getModel(){
        return this->model;
    }

    string getPrice(){
        return this->price;
    }

    string getSize(){
        return this->size;
    }
    
};


int main(){
    MobilePhone samsung( "galaxy Grand","Model X"," Rs 90,000 ", "6 inch"  );

    cout<<samsung.getName();
    // in this way we can get all the values stored
}