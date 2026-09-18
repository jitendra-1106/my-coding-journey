#include<iostream>
using namespace std;

int main(){
    int a = 4 , b = 5;
    cout<<"Operators in C++"<<endl; // cout<<"Operators in c++\n";
    cout<<"Following are the type of operators in C++"<<endl;

    //Arithmatic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a x b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment operators --> used to assign values to variables
    // int a = 8;
    // float = 9.8;
    // char c = 'd';

    //Comparison operators  ( True = 1 : False = 0 :)
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of [(a == b) && (a<b)] is "<<((a == b) && (a<b))<<endl;
    cout<<"The value of [(a == b) || (a<b)] is "<<((a == b) || (a<b))<<endl;
    cout<<"The value of (!(a == b)) is "<<(!(a == b))<<endl;

    return 0;
    
}