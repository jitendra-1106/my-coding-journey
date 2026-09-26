#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
    void setid(void){
        // Assigns 125 to salary for the current Employee object.
        // Here salary is not being used in output, but every object gets
        // its own separate salary variable.
        salary = 125;
        cout<<"Enter the id of employee:"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of this employee is:"<<id<<endl;
    }
};
int main(){
    // These would create 4 separate Employee objects individually.
    // Employee jk, mk, kk, sk;

    // jk.setid();
    // jk.getid();
    // We would have to call functions separately for every object. 
    // This becomes inconvenient when we have many objects.

    Employee fb[4];
/*
Array of 4 Employee objects.
This creates: 
fb[0] -> Employee object 1 
fb[1] -> Employee object 2
fb[2] -> Employee object 3 
fb[3] -> Employee object 4 
Each object has its own:id, salary 
So this is called an "Array of Objects":
an array whose elements are objects of the same class.
*/
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}
