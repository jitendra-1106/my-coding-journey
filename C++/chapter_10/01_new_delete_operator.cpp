#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr1 = &a;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of a is : "<<*ptr1<<endl;

    *ptr1 = 3;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of a is : "<<*ptr1<<endl;

    // new & delete operator
    // Dynamically allocates memory for an integer, stores 6 in it,and returns its address to ptr2.
    int* ptr2 = new int(6);
    cout << "Value at ptr2: " << *ptr2 << endl;

    // Release the memory after its use is complete.
    delete ptr2;
    ptr2 = nullptr;
    // Sets the pointer to nullptr after releasing memory to avoid accidentally using the invalid pointer.


    // Dynamically allocates memory for a float, stores 40.5 in it,and returns its address to ptr3.
    float* ptr3 = new float(40.5);
    cout << "Value at ptr3: " << *ptr3 << endl;

    // Release the memory after its use is complete.
    delete ptr3;
    ptr3 = nullptr;


    // Dynamically allocates memory for 3 integers and returns the address of the first element to arr.
    int* arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    // *(arr+1) = 20;
    arr[2] = 30;

    cout << "Value of arr[0]: " << arr[0] << endl;
    cout << "Value of arr[1]: " << arr[1] << endl;
    cout << "Value of arr[2]: " << arr[2] << endl;

    // Release the memory allocated for the array.
    delete[] arr;
    arr = nullptr;
    
    return 0;
}