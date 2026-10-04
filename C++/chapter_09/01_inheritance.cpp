#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id = inpId;
        salary = 34.0;
    }
    // Default constructor 
    // It is called automatically when a derived-class constructor 
    // does not explicitly call a base-class constructor.
    Employee(){}
    
};

/*// Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1.Default visibility mode is private.
2.Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
3.Private Visibility Mode: Public members of the base class become private members of the derived class.
4.Private members are never inherited.
(Private members of the base class are not directly accessible in the derived class.)
*/

// Creating a Programmer class derived from Employee Base class

class Programmer : Employee{

    public:
    Programmer(int inpId){
        // id is inherited from Employee. 
        // Since inheritance is private by default here, 
        // id is private inside Programmer.
        id = inpId;
    }
    // Each Programmer object gets its own languagecode.
    int languagecode = 7;

    void getdata(){
        // Accessing the inherited id member.
        cout<<id<<endl;
    }
};


int main(){
    // Two Employee objects are created. 
    // Their parameterized constructor is called.
    Employee jk(1), mk(2);

    cout<<jk.salary<<endl;
    cout<<mk.salary<<endl;

    Programmer skillf(3);

    cout<<skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}

// When a derived object is created, the base class constructor is called first.
// If no base constructor is specified, the compiler calls the default constructor.
// If the base class has no default constructor, explicitly call a base constructor
// using the initializer list.
