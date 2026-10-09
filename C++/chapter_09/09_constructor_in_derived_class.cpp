#include<iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()

   // A is constructed first, then B.
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()

    // B is constructed first, then C, then A.
    // The order follows the inheritance declaration.
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()

    // C is a virtual base class, so it is constructed first. 
    // Then B is constructed, followed by A. 
    // Virtual base classes are constructed before non-virtual bases.
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructer called"<<endl;
    }
    void printdataBase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructer called"<<endl;
    }
    void printdataBase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

// If inheritance order were Base2 first, Base2 would be constructed first.
// class Derived : public Base2, public Base1{}

// Derived inherits from Base1 first and Base2 second.
class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructer called"<<endl;
    }
    void printdataDerived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    Derived jitendra(1, 2, 3, 4);

    jitendra.printdataBase1();
    jitendra.printdataBase2();
    jitendra.printdataDerived();

    return 0;
}