#include<iostream>
using namespace std;

class Complex{
    int a, b;

    public:

    /*
        Parameterized constructor declaration.

        This constructor takes two parameters:
        x -> value for a
        y -> value for b

        Since it takes parameters, it is called a
        PARAMETERIZED CONSTRUCTOR.
    */
    Complex(int, int); // Constructor declaration

    
    // This function displays the values of a and b for the current object.
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

/*
    Parameterized constructor definition.

    Complex :: Complex(int x, int y)

    - First 'Complex'  -> class name
    - '::'             -> scope resolution operator
    - Second 'Complex' -> constructor name
    - x and y          -> parameters received by the constructor

    The constructor initializes the object's data members.
*/
Complex :: Complex(int x, int y){ // ----> This is a parameterized constructor as it takes 2 parameters.

    a = x; // Store the value of x in data member a
    b = y; // Store the value of y in data member b
}

int main(){

    // Implicit call
    /*
        IMPLICIT CONSTRUCTOR CALL

        Here, the constructor is called automatically
        when the object 'a' is created.

        4 is passed to x
        6 is passed to y

        So inside the constructor:
            a = 4
            b = 6
    */
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    /*
        EXPLICIT CONSTRUCTOR CALL

        Here, we explicitly write:
            Complex(5, 7)

        This creates a Complex object using the constructor
        with 5 and 7 as arguments.

        That object is then used to initialize object 'b'.
    */
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}