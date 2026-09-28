#include<iostream>
using namespace std;

// Forward declaration of c2.
// We need this because c1 refers to c2 in the friend function declaration.
class c2;

class c1{

    // Private data member by default.
    int val1;

    // exchange() is declared as a friend of c1.
    // It can access c1's private member val1.
    // '&' means x will refer to the original c1 object.
    friend void exchange(c1 & , c2 &);

    public:
        // Stores the given value in val1.
        void indata(int a){
            val1 = a;
        }

        // Displays the value of val1.
        void display(void){
            cout<< val1 <<endl;
        }
};

class c2{

    // Private data member by default.
    int val2;

    // exchange() is declared as a friend of c2.
    // It can access c2's private member val2.
    // '&' means y will refer to the original c2 object.
    friend void exchange(c1 &, c2 &);

    public:
        // Stores the given value in val2.
        void indata(int a){
            val2 = a;
        }

        // Displays the value of val2.
        void display(void){
            cout<< val2 <<endl;
        }
};

// Friend function definition.
// x is a reference to the original c1 object.
// y is a reference to the original c2 object.
//
// Because exchange() is a friend of both classes,
// it can directly access val1 and val2.
void exchange(c1 &x, c2 &y){

    // Store the original value of x.val1 in tmp.
    // x.val1 is actually oc1.val1.
    int tmp = x.val1;

    // Copy y.val2 into x.val1.
    x.val1 = y.val2;

    // Put the old value of x.val1, stored in tmp, into y.val2.
    y.val2 = tmp;
}


int main(){
    // Create one object of c1 and one object of c2.
    c1 oc1;
    c2 oc2;

    // Pass 34 to indata().
    // Inside c1::indata(), val1 = 34.
    //
    // So:
    // oc1.val1 = 34
    oc1.indata(34);


    // Pass 67 to indata().
    // Inside c2::indata(), val2 = 67.
    //
    // So:
    // oc2.val2 = 67
    oc2.indata(67);

    // Call the friend function.
    // Because parameters are references:
    //
    // x refers to oc1
    // y refers to oc2
    //
    // No separate copies of oc1 and oc2 are created.
    exchange(oc1, oc2);

    // Display the value of c1 after exchanging.
    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();

    // Display the value of c2 after exchanging.
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();
    
    return 0;
}