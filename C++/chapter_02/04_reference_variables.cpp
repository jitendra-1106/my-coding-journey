#include<iostream>
using namespace std;

int main(){

    /*A reference variable is an alias (another name) for an existing variable.
    It does not create a separate variable or separate memory location.*/
    
    int x = 3;
    int &y = x;
    // Reference variable: y is another name (alias) for x.
    // Both x and y refer to the same memory location.
    // Changing y will also change x, and vice versa.

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}