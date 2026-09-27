#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
    void setnumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    /* 
    Declare sumcomplex() as a friend function. 
    sumcomplex() is NOT a member function of Complex,
    but because it is declared as a friend, 
    it can access the private members 'a' and 'b' of Complex objects.
    */

    friend Complex sumcomplex(Complex o1, Complex o2);
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

/* 
This is a normal function, not a member function of Complex. 
It receives two Complex objects: 
o1 → copy of the first object 
o2 → copy of the second object 
Because this function is declared as a friend, 
it can directly access o1.a, o2.a, o1.b and o2.b.
*/

Complex sumcomplex(Complex o1, Complex o2){

    // Create a new Complex object to store the result.
    Complex o3;
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;
    
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    /*
    Pass c1 and c2 to sumcomplex().
    c1 → o1, c2 → o2 
    The returned Complex object is stored in 'sum'.
    */
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}

/*
Properties of Friend Functions:

1. A friend function is not a member of the class,
   so it is not in the scope of the class.

2. Since it is not a member function, it cannot be called
   using the object of that class.
   c1.sumComplex();   // Invalid

3. It can be called like a normal function,
   without using an object.
   sumComplex(c1, c2);

4. It usually takes objects of the class as arguments
   when it needs to work with their data.

5. A friend function can be declared inside either
   the public or private section of the class.

6. It cannot access the members directly by their names
   because it is not a member function.
   It needs an object name to access the members:
   object_name.member_name

Example:
o1.a
o2.b
*/