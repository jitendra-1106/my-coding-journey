#include <iostream>
#include <iomanip>  // Required for setw()
using namespace std;

int main(){

    int a = 4, b = 54, c = 1234;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;
    // endl is a stream manipulator that moves the cursor to the next line.
    // It also flushes the output buffer.

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    // setw(4) sets the minimum width of the output to 4 spaces.
    // It is a stream manipulator used to format output.

    return 0;
}

/*
endl      → moves output to the next line
setw(4)   → sets the minimum width for the next output
*/