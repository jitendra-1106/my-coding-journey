#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    // int b;// Stores the first integer.
    // int a;// Stores the second integer.

    int a;// Stores the first integer.
    int b;// Stores the second integer.

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)

    // Warning: a is declared before b, so a initializes first. // Do not rely on b's value while initializing a.
    // Test(int i, int j) : b(j), a(i+b)-->Red flag this will create problems because a will be initialized first
    
    // Initialize a through the initialization list. 
    // Assign a value to b inside the constructor body.
    // Test(int i, int j) : a(i)
    // {
    //     b = j;
    //}

    Test(int i, int j) 
    {
        a = i; // Assign i to a after a has been initialized.
        b = j; // Assign j to b after b has been initialized.

        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);// Create an object and pass 4 and 6.

    return 0;
}
