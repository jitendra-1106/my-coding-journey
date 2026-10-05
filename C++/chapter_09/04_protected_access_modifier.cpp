#include<iostream>
using namespace std;

// Protected members are like private members for outside access:
// they cannot be accessed directly through an object,
// but they can be inherited and accessed inside the Derived class.

class Base{
    protected:
        int a; // Protected member:
        // It cannot be accessed directly from main() using Base object.
        // It can be accessed inside Base and Derived class.

    private:
        int b;

};

/*
Inheritance access table:
                      Public Derivation      Private Derivation    	Protected Derivation
1.Private members-      Not Inherited          Not Inherited           Not Inherited              
2.Protected members-      Protected               Private                Protected                    
3.Public members-           Public	               Private                Protected 

The inheritance mode decides how Base's public and protected members will appear inside Derived.
*/

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a;
    // 'a' is protected in Base.
    // After protected inheritance, 'a' remains protected in Derived.
    //
    // Protected members can be accessed inside the class/derived class,
    // but NOT directly from main() using an object.
 
    return 0;
}

