#include<iostream>
using namespace std;

// 'this' is a pointer to the object that invokes the member function.

class A{
    int a;
    public:
    void setdata(int a){
        // a = a;// Both names refer to the parameter, so the object's data member remains unchanged.

        // 'this' points to the object that calls the member function.
        // this->a accesses the object's data member, while a refers to the parameter.
        this->a = a;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};


int main(){
    //this is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    
    a.setdata(4);
    a.getdata();

    return 0;
}

/*
class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            // Returns a reference to the current object so another member function
            // can be called on the same object in the same statement.
            return *this;
        }

// 'this' is a pointer to the current object, *this represents the current object,
// and return *this returns a reference to the same object when the return type is A&.
// A& means the function returns a reference to an existing object of class A,
// allowing us to call another member function on the same object.

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();

    return 0;
}
*/

/*
// 1. this -> Stores the address of the current object.
// 2. *this -> Represents the current object.
// 3. A& -> Specifies that the function returns a reference to the same object.
*/