#include<iostream>
using namespace std;

class Complex{
    int a, b;

    public:
     /*
        Constructor:
        A constructor is a special member function of a class.

        - It has the same name as the class.
        - It has no return type, not even void.
        - It is automatically invoked(called) when an object is created.
        - Its main purpose is to initialize the object's data members.
    */
    Complex(void); // Constructor declaration
    // 'void' means this constructor takes no arguments.

    void printnumber(void){
        // Displays the values of a and b for the current object.
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

/*
    Constructor definition:

    'Complex :: Complex(void)'

    - The first 'Complex' is the class name.
    - '::' is the scope resolution operator.
      It tells the compiler that this function belongs to the Complex class.
    - The second 'Complex' is the constructor name.
    - '(void)' means the constructor takes no arguments.

    Since this constructor takes no parameters,
    it is called a DEFAULT CONSTRUCTOR.
*/

Complex :: Complex(void){ 

    // Initialize the data members when an object is created.
    a = 0;
    b = 0;
    //cout<<"Hello World";
}


int main(){

    Complex c1, c2;
    c1.printnumber();
    c2.printnumber();

    return 0;

}

/*
    Important Characteristics of Constructors in C++:

    1. A constructor should be declared in the public section
       if we want to create objects normally from outside the class.

    2. A constructor is automatically invoked when an object is created.

    3. A constructor has no return type.
       We do not write 'void', 'int', etc. before its name.

    4. A constructor can have default arguments.

    5. We cannot take the address of a constructor.
*/