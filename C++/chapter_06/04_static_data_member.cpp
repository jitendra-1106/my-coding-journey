#include<iostream>
using namespace std;

class Employee{
    int id;  // Each object has its own separate id
    static int count; // One shared count for the entire class

    public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;

        // Increase the shared count whenever an employee is created/registered
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and this is employee no is "<<count<<endl;
    }
};

// count is the static data member of class Employee
int Employee :: count;//// Default value is 0
// int Employee :: count = 1000;// We could also give it a starting value:

int main(){
    // Three different objects are created. 
    // Each object has its own 'id',
    // but all three share the same 'count'.
    Employee jitendra, mohit, keshav;
    //jitendra.id = 1;
    //jitendra.count = 1; //Cannot do this as id and count are private

    jitendra.setdata();
    jitendra.getdata();

    mohit.setdata();
    mohit.getdata();

    keshav.setdata();
    keshav.getdata();

    return 0;
}


/*
    count is a static data member.

    A static data member is shared by all objects of the class.
    Therefore, there is only one 'count' for the entire class.

    If 'count' were not static, every object would have its own
    separate 'count'. Each object's count would start from 0
    and would increase separately.

    But because 'count' is static, all objects use the same count.
    So when one object increases count, the updated value is
    available to the other objects as well.

    The static data member is defined outside the class because
    the declaration is written inside the class.
*/

