#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
int rowNum;
cout<<" Enter the numbers of rows for the pattern \n ";
cin>>rowNum;

for(int i=1;i<=rowNum;i++){
    for(int j=1;j<=rowNum-i;j++){
        cout<<"   ";
    };

    for(int k=1;k<=(2*i-1);k++){
        cout<<" * ";
    }; cout<<endl;
}

}