#include<iostream>
using namespace std;

//Constructor Overloading means having multiple constructors in the same class with different parameter lists.
class Complex{
    int a;
    int b;

    public:

    Complex(int x, int y){
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

    Complex(){
        a = 0;
        b = 0;
    }

    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    Complex c1(2, 4);
    c1.printnumber();

    Complex c2(7);
    c2.printnumber();

    Complex c3;
    c3.printnumber();

    return 0;
}