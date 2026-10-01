#include <iostream>
using namespace std;

/*
Destructor:
A destructor is a special member function that is automatically called
when an object is destroyed or goes out of scope.
It has the same name as the class, but with a '~' before it.
A destructor does not take any arguments and does not return any value.
It is mainly used to perform cleanup work before an object is destroyed.
*/

// Global variable used to keep track of the number of currently existing objects.
int count = 0;

class num{

public:

    // Constructor is automatically called when an object is created.
    num()
    {
        // Increase count whenever a new object is created.
        count++;

        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    // Destructor is automatically called when an object is destroyed
    // or goes out of its scope.
    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        
        // Decrease count because one object is being destroyed.
        count--;
    }
};

int main(){

    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;

    // n1 is created here, so the constructor is called.
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;

        // n2 and n3 are created, so the constructor is called for both.
        num n2, n3;

        // n2 and n3 go out of scope here.
        // Their destructors are automatically called.
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;
    // n1 is still inside its scope, so it has not been destroyed yet.
    // When main() ends, n1 goes out of scope and its destructor is called.

    return 0;

}


/*
Constructor -> Called automatically when an object is created.

Destructor -> Called automatically when an object is destroyed or goes out of scope.

Objects are created in the order they are declared:
Creation: first -> last

Objects are destroyed in the reverse order:
Destruction: last -> first
*/
