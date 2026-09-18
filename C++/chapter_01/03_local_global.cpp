#include <iostream>
using namespace std;

int glo = 7; // Global variable
void sum()
{
    cout << glo; // Uses the global 'glo'
}

int main(){

    int glo = 9; // Local variable of main()
    glo = 15;    // Changes the local 'glo' from 9 to 15

    sum();       // Prints global 'glo' → 7
    cout << glo; // Prints local 'glo' → 15
    return 0;
}

/*
1) If a local variable and global variable have the same name,
   the local variable gets priority inside that function.

2) If a local variable with that name does not exist,
   C++ uses the global variable.
*/