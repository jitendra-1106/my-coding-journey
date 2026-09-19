#include<iostream>
using namespace std;

int main(){

    // int a = 45;
    // cout<<"The value of a was "<<a<<endl;
    // a = 90;
    // cout<<"The value of a is "<<a<<endl;
    // Normal variable: its value can be changed after declaration.

    
    //const means the value of the variable cannot be changed after it is initialized.
    const int a = 45;
    // 'const' makes the variable constant.
    // Once initialized, its value cannot be changed.

    cout<<"The value of a is "<<a<<endl;


    // a = 60;
    // Error: cannot modify a const variable.

   
    return 0;
}