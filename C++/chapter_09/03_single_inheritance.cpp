#include<iostream>
using namespace std;

class Base{
    int data1; // Private member: Derived class cannot access data1 directly
            // It can access data1 indirectly through Base's public functions
    
    public:
    int data2;  // Public member of Base
            // Because of private inheritance, it becomes private inside Derived
    void setdata();
    int getdata1();
    int getdata2();
};

void Base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int Base :: getdata1(){
    return data1;
}

int Base :: getdata2(){
    return data2;
}

// Derived class inherits Base privately
class Derived : private Base{ // Class is being derived privately.
    int data3;

    public:
    void process();
    void display();
};

void Derived :: process(){
    setdata();
    data3 = data2*getdata1();
}

void Derived :: display(){
    cout<<"value of data 1 is:"<<getdata1()<<endl;
    cout<<"value of data 2 is:"<<data2<<endl;
    cout<<"value of data 3 is:"<<data3<<endl;
}


int main(){
    // Object of Derived class is created
    Derived der;

    // der.setdata();
    // Cannot use der.setdata() here because Base is inherited privately.
    // setdata() became private inside Derived,
    // so it is accessible inside Derived but not from main().

    der.process();
    der.display();

    return 0;
}