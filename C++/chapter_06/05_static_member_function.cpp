#include<iostream>
using namespace std;

class Employee{
    int id;  
    static int count; 

    public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and this is employee no is "<<count<<endl;
    }

    static void getcount(void){
        // cout<<id; // Error: id is a non-static data member
        cout<<"The value of count is "<<count<<endl;
    }
};

/* 
A static member function belongs to the class, 
not to a particular object.
It can directly access static data members 
because they are shared by the whole class.
It cannot directly access non-static data members
because non-static members belong to individual objects.
Example: count → OK, because count is static 
id → Error, because id is non-static 
*/

int Employee :: count;

int main(){
    
    Employee jitendra, mohit, keshav;
    
    jitendra.setdata();
    jitendra.getdata();
    // Static member function can be called using the class name.
    Employee :: getcount();

    mohit.setdata();
    mohit.getdata();
    Employee :: getcount();

    keshav.setdata();
    keshav.getdata();
    Employee :: getcount();

    return 0;
}