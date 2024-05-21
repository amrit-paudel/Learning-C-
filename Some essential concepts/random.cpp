#include <iostream>

using namespace std;

class Number{
    private:
    int num;

    public:
    Number(int num){
        this->num=num;
    }

    void getNumber(){
        cout<<this->num;
    }

    friend Number operator+(Number& num1, Number& num2);
};
 
Number operator+(Number& num1, Number& num2){
    return num1.num + num2.num;
}

int main()
{
    Number num1(10);
    Number num2(20);
    Number sumNum=num1+num2;
    sumNum.getNumber();

}