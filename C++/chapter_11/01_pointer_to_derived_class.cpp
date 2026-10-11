#include<iostream>
using namespace std;

/*
// Polymorphism
// - One name and multiple forms
// - E.g. Function overloading, operator overloading
// - E.g. Virtual functions

Polymorphism in C++ can be of two types:

1. Compile-time polymorphism
   Compile-time polymorphism in C++ is achieved using:
   1.1 - Function Overloading
   1.2 - Operator Overloading

2. Run-time polymorphism
   Run-time polymorphism in C++ is achieved using:
   2.1 - Virtual Functions
*/


class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
    }

};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived Class variable var_derived : "<<var_derived<<endl;
    }

};
int main(){
    // A BaseClass pointer can point to a BaseClass object
    // or to a DerivedClass object.
    BaseClass* base_class_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;

    // The base pointer now points to the derived object
    base_class_pointer = &obj_derived;

    // Allowed: var_base belongs to BaseClass and is inherited by DerivedClass
    base_class_pointer->var_base = 34;

    // Error: the pointer's declared type is BaseClass*,
    // so it cannot directly access var_derived
    // base_class_pointer->var_derived= 134; 

    // Calls BaseClass::display() because display() is not virtual
    base_class_pointer->display();
    // A function can be called using an object or a pointer.
    // (*ptr).display() and ptr->display() do the same thing.

    // Updates the same var_base inside obj_derived
    base_class_pointer->var_base = 3400; 
    // Again calls BaseClass::display()
    base_class_pointer->display();

    // A DerivedClass pointer can access inherited and
    // derived class members
    DerivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;

    // Calls DerivedClass::display()
    derived_class_pointer->display();

    return 0;
}