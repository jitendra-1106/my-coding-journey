#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};


int main(){
    /*
    Complex c1;
    Complex* ptr = &c1;

    c1.setData(11, 20);
    c1.getData();
    //OR
    (*ptr).setData(11, 20);
    (*ptr).getData();
    */

    // Dynamically creates a Complex object and stores its address in ptr.
    Complex* ptr = new Complex;

    // (*ptr).setData(11, 20);
    // (*ptr).getData();
    //OR(Arrow operator)

    // Sets the real and imaginary parts through the pointer.
    ptr->setData(11, 20);
    // Accesses and displays the object's data through the pointer.
    ptr->getData();

    // Releases the dynamically allocated object's memory.
    delete ptr;
    
    return 0;
}