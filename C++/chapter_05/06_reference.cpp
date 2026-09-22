#include<iostream>
using namespace std;

// int& means the function will return a reference to an existing int variable.
int& swapreference(int &a, int &b);

int& swapreference(int &a, int &b){
    // a is another name for x
    // b is another name for y
    int temp = a;

    // x gets the value of y
    a = b;
    // y gets the original value of x
    b = temp;

    // a is another name for x.
    // So, the function returns a reference to x.
    return a;
}


int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    swapreference(x, y) = 755; // Then the function returns a reference to x.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}

/*-->
**Reference return:** A normal return gives a value, but a reference return gives access to the original variable.

In this program, `a` is a reference to `x` and `b` is a reference to `y`.

So, `return a;` returns `a`, which is a reference to `x`.
Therefore, in `swapreference(x, y) = 755;`, the `755` is assigned to `x`.

If we used `return b;` instead, the function would return `b`, which is a reference to `y`.
Therefore, `swapreference(x, y) = 755;` would assign `755` to `y`.

**In short:** `= value` changes the original variable whose reference is returned by the function — 
return a → `x` changes, return b → `y` changes.
<--*/