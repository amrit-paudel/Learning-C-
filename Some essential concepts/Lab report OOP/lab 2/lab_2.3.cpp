/*
Define two namespaces: Square and Cube.
In both the namespaces, define an integer variable named "num" and a function named "fun". 
The "fun" function in "Square" namespace, should return
the square of an integer passed as an argument while the "fun" function in "Cube" namespace,
should return the cube of an integer passed as an argument. 
In the main function, set the integer variables "num" of both the namespaces with different values. 
Then, compute and print the cube of the integer variable "num" of the "Square" namespace 
using the "fun" function of the "Cube" namespace and the square of the integer 
variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.
*/


#include<iostream>
#include<string>

using namespace std;

namespace square{
    int num;
    int squareNum(int& num){
        return num*num;
    }
}

namespace cube{
    int num;
    int cubeNum(int& num){
        return num*num*num;
    }
}

int main(){
    square::num=2;

    cube::num=3;

    cout<<" Square : "<<square::squareNum(cube::num)<<endl;
    cout<<" Cube : "<<cube::cubeNum(square::num)<<endl;

}
