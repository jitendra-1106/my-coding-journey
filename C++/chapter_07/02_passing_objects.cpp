#include<iostream>
using namespace std;

class complex {
    int a; // Real part of the complex number.
    int b; // Imaginary part of the complex number.

    public :
    // Set the values of a and b for an object.
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }

/* 
This function takes two objects as parameters.
o1 and o2 are copies of the objects passed to this function.
We use their data members to calculate the sum.
The function belongs to the class,
so it can directly access the private members 'a' and 'b' of the objects.
*/

    void setdatabysum(complex o1, complex o2){
        // Add the real parts of both objects.
        a = o1.a+o2.a;
        // Add the imaginary parts of both objects.
        b = o1.b+o2.b;
    }

    // Display the complex number.
    void printNumber(){
    cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    // Three separate objects are created.
    // Each object has its own a and b.
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printNumber();

    c2.setdata(3, 4);
    c2.printNumber();
    /*
    Pass c1 and c2 as arguments to setdatabysum().
    Inside the function: o1 = c1, o2 = c2
    Their values are added and stored in c3.
    */

    c3.setdatabysum(c1, c2);
    // Display the result stored in c3.
    c3.printNumber();

    return 0;
}