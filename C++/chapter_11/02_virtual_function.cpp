#include<iostream>
using namespace std;

// The virtual keyword allows runtime polymorphism.
// When a base class pointer points to a derived class object,
// the display() function of the actual object (DerivedClass)
// is called instead of the base class display() function.

class BaseClass{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
    }

};

class DerivedClass : public BaseClass{
    public:
    int var_derived = 2;
    void display(){
        cout<<"Displaying Base Class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived Class variable var_derived : "<<var_derived<<endl;
    }

};

int main(){
    BaseClass* base_class_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    // Without virtual, the base class function is called.
    // With virtual, the function of the actual object is called.
    base_class_pointer->display();

    return 0;
}