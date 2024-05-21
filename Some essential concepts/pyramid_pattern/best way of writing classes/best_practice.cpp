#include<iostream>
#include<string>

using namespace std;

class Students{
    private:
    string name,addr;
    int grade;

    public:
    void setName(string name);
    void setAddr(string addr);
    void setGrade(int grade);

    string getName();
    string getAddr();
    int getGrade();
    

};

inline void Students::setName(string name){
    this->name=name;
};

inline void Students::setAddr(string addr){
    this->addr=addr;
};

inline void Students::setGrade(int grade){
    this->grade=grade;
};

inline string Students::getName(){
    return this->name;
};

inline string Students::getAddr(){
    return this->addr;
};

inline int Students::getGrade(){
    return this->grade;
};

int main(){
    Students amrit;

    amrit.setName("Amrit poudel");
    amrit.setAddr(" Ratnanagar, Chitwan ");
    amrit.setGrade(12);

    cout<<amrit.getName()<<endl;
    cout<<amrit.getAddr()<<endl;
    cout<<amrit.getGrade()<<endl;

    Students amrit2=amrit;

    cout<<amrit2.getName();

}