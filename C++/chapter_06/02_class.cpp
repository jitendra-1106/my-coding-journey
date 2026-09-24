/* OOPs - Classes and objects
C++ --> initially called --> C with classes by stroustroup
class --> extension of structures (in C)

structures had limitations
    - members are public
    - No methods

classes --> structures + more
        --> can have methods and properties
        --> can make few members as private & few as public
structures in C++ are typedefed

--> you can declare objects along with the class declarion like this:
class Employee {
    // Class definition
} harry, rohan, lovish; 
// harry.salary = 8 makes no sense if salary is private
*/

// Nesting of member functions

#include<iostream>
#include<string>
using namespace std;

class binary{
    // private:
    string s; // By default, class members are private.
    
    public:
    void read(void);
    void check_binary(void);
    void ones_complement(void);
    void display(void);
};

// Takes input from the user and stores it in s.
void binary :: read(void){
    cout<<"Enter a number:"<<endl;
    cin>>s;
}

// Checks whether the entered number contains only 0 and 1.
void binary :: check_binary(void){
    for (int i = 0; i < s.length(); i++)
    {
        // If the character is neither 0 nor 1,then the entered number is not a valid binary number.
        if(s.at(i)!='0' && s.at(i)!='1'){
        // Single quotes ('') are used for characters, because s is a string and s.at(i) gives one character.
        
            cout<<"Incorrect binary format"<<endl;
            exit(0); // Terminates the program immediately.
        }
    }
    
}

// Converts the binary number into its 1's complement.
void binary :: ones_complement(void){

    // check_binary();

    /* Calling check_binary() from inside ones_complement() is a nested function call.
    It means one member function is calling another member function of the same class.
    If check_binary() is called here, then we do NOT need to call b.check_binary() separately in main().
    A member function can also access the private data members of the same class, 
    so nesting works even when the data member is private.*/

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
           s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

// Displays the binary number stored in s.
void binary :: display(void){
    cout<<"Displaying your binary number:"<<endl;
     for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b; // Creates an object b of class binary.
    b.read();
    b.check_binary();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}