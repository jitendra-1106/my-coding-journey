#include<iostream>
using namespace std;

// Forward declaration:
// Tells the compiler that a class named Complex will be defined later.
class Complex;

class Calculator{
    public:
    // Normal member function that adds two integers.
    int add(int a, int b){
        return a+b;
    }

    // Function declaration.
    // The actual definition is written outside the class later.
    int sumrealcomplex(Complex, Complex);
};

class Complex{
    // Private data members by default.
    int a;
    int b;

    // Makes only Calculator's sumrealcomplex() member function
    // a friend of this class.
    // Therefore, that function can access private members a and b.
    friend int Calculator :: sumrealcomplex(Complex, Complex); 

    public:
    // Sets the real part (a) and imaginary part (b).
    void setnumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    // Displays the complex number.
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// Definition of Calculator's member function.
// This function can access Complex's private members
// because Complex declared it as a friend.
int Calculator :: sumrealcomplex(Complex o1, Complex o2){
    return o1.a+o2.a;
}

int main(){

    // Create two Complex objects.
    Complex o1, o2;

    // Set values for the first object.
    // o1: a = 1, b = 4
    o1.setnumber(1, 4);

    // Set values for the second object.
    // o2: a = 5, b = 8
    o2.setnumber(5, 8);

    // Create an object of Calculator.
    Calculator c1;

    // Call Calculator's member function.
    // o1 and o2 are passed as arguments.
    // The function accesses their private 'a' members.
    int res = c1.sumrealcomplex(o1, o2);

    // Print the sum of the real parts.
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;

    return 0;
}