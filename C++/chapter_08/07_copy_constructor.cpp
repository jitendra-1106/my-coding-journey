#include<iostream>
using namespace std;

//NEW object + existing object → Copy Constructor
//EXISTING object = existing object → Copy Assignment
class Number{
    int a;
    public:

    // Default constructor.
    // Called when an object is created without an argument.
    Number(){
        a = 0;
    }

    // Parameterized constructor.
    // Called when an object is created with an int value.
    Number(int num){
        a = num;
    }

    
    // Copy constructor.
    // It creates a NEW object by copying another Number object.
    //
    // If we do not write a copy constructor, C++ normally
    // provides an implicit copy constructor automatically.
    // It performs member-wise copying of the object's data.
    Number(Number &obj){
        cout<<"Copy constructor called!!!"<<endl;

        // Copy the value of a from the source object into the new object's a.
        a = obj.a;
    }

    void display(){
        cout<<"The number for this object is "<< a <<endl;
    }
};

int main(){
    // x is created using the default constructor --> a becomes 0.
    // y is also created using the default constructor --> a becomes 0.
    // z is created using the parameterized constructor --> a becomes 45.
    // z2 is created using the default constructor --> a becomes 0.
    Number x, y, z(45), z2;


    x.display();
    y.display();
    z.display();


    // COPY CONSTRUCTOR IS CALLED.
    //
    // z1 does not exist before this line.
    // A NEW object z1 is being created using existing object z.
    //
    // z1 gets a copy of z's data.
    Number z1(z); // Copy constructor invoked
    z1.display();
    // z1 should exactly resemble(be similar to) z  or x or y.


    // COPY CONSTRUCTOR IS NOT CALLED.
    //
    // z2 already exists.
    // We are only copying z's value into the existing object z2.
    //
    // This uses the copy assignment operator (=), not the
    // copy constructor.
    z2 = z; // Copy constructor not called
    z2.display();


    // COPY CONSTRUCTOR IS CALLED.
    //
    // z3 does not already exist.
    // A NEW object z3 is being created and initialized
    // from existing object z.
    Number z3 = z; // Copy constructor invoked
    z3.display();


    // z1, z2 and z3 now contain the same data as z.
    // z1, z2 and z3 are different objects; only their data is copied.


    return 0;

}

/*
Constructor: Initializes a newly created object.

Copy constructor: Initializes a newly created object using the values of an existing object.

Assignment operator: Copies the values of one already-existing object into another already-existing object.

*/

/*
Copy constructor syntax:
Number       -> Constructor name, same as the class name.
Number       -> Parameter type; it accepts an object of the Number class.
&z           -> z is a reference to the existing object being copied.
            No new object is created for z; it refers to the original object.

Example: Number z1(z);
Here, z refers to the original object, and its values can be copied into the newly created z1 object.
*/

/*
&q means q is a reference to the existing object that is passed
when the copy constructor is called.
The name q can be anything; it is just the parameter name.
The reference allows us to access the values of the original object and copy them into the newly created object.
*/