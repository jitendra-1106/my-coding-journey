#include<iostream>
using namespace std;

//Multiple Inheritance: Ambiguity and Function Overriding.

class Base1{
    public:
        void greet(){
            cout<<"How are you"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
     public:
        void greet(){
        // Both Base1 and Base2 have a greet() function.
        // Calling greet() directly would create ambiguity. 
        // Scope resolution specifies that Base2's greet() should be called.
        Base2 :: greet();
    }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

// D inherits say() from B but defines its own say().
class D: public B{
    int a;
    public:
    // D's own say() hides/overrides B's say() for a D object.
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};



int main(){
    // Base1 and Base2 each have their own greet(). 
    // There is no ambiguity because they are separate objects.
    Base1 base1obj;
    Base2 base2obj;
    
    base1obj.greet();
    base2obj.greet();
    
    // Derived has inherited two greet() functions with the same name.
    // Calling d.greet() uses Derived's own greet(),
    // which explicitly calls Base2::greet().

    Derived d;
    d.greet();
    cout<<endl;

    // Base class B has its own say().
    B b;
    b.say();

    // D has its own say(), so D's version is called for a D object.
    D s;
    s.say();


    return 0;
}