#include <iostream>
using namespace std;

int main(){

    int marks[] = {10, 20, 30, 40};
    int* ptr = marks;
    // 'marks' represents the address of the first element of the array.
    // It is equivalent to &marks[0].

    // *ptr gives the value stored at the address currently held by ptr.
    // Initially, ptr points to marks[0], so *ptr is 10.
    cout<<"The value of *ptr is "<<*ptr<<endl;
    //cout<<"The value of *(ptr+1) is "<<*(ptr++)<<endl;
    
    cout<<"The value of *(ptr+1) is "<<*ptr<<endl;
    // *(ptr + 1) means: move the pointer one element forward
    // and then access the value at that address.
    // Since ptr points to marks[0], (ptr + 1) points to marks[1].
    cout<<"The value of *(ptr+2) is "<<*(ptr+2)<<endl;
    cout<<"The value of *(ptr+3) is "<<*(ptr+3)<<endl;

    cout<<endl;
    cout<<*(ptr++)<<endl;
    cout<<*(ptr)<<endl;
    cout<<*(++ptr)<<endl;


    return 0;
}