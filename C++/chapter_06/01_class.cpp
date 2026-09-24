#include<iostream>
using namespace std;

// A class is a blueprint that defines what data members and member functions its objects will have.
class Employee{

    // private and public are called access specifiers.
    // They control which class members can be accessed directly from outside the class.

    // Private members cannot be accessed directly from outside the class.
    // Private members can only be accessed directly from inside the class.
    private:
    int a, b, c;

    // Public members can be accessed directly from outside the class using the object.
    public:
    int d, e;

    // Member function used to set values of private data members.
    // a1, b1 and c1 are parameters that receive values.
    void setdata(int a1, int b1, int c1);

    // Member function used to display all data members.
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

// Definition of the setdata() member function outside the class.
// Employee:: means that setdata() belongs to the Employee class.
void Employee :: setdata(int a1, int b1, int c1){
    // Values received through parameters are assigned to the object's private data members.
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    // jitendra is an object of the Employee class.
    // The object gets the data members and member functions defined by the Employee class.
    Employee jitendra;

    // d and e are public, so they can be accessed directly using the dot (.) operator.
    jitendra.d = 11;
    jitendra.e = 6;

    // jitendra.a = 134; //This will throw an error because a is private.
    // a is private, so it cannot be accessed directly from outside the class.

    // setdata() is called using the dot operator.
    // 1, 2 and 3 are passed to a1, b1 and c1 respectively.
    // These values are then stored in a, b and c.
    jitendra.setdata(1, 2, 3);

    // getdata() is called using the dot operator to display the values of all data members.
    jitendra.getdata();

    return 0;
}