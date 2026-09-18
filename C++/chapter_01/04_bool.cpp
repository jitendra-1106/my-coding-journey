#include <iostream>
using namespace std;

int main(){

    bool a = true;   // bool stores either true or false
    cout << a;        // true is printed as 1


    bool b = false;   // false is stored in b
    cout<<"\n";
    cout << b;        // false is printed as 0

    cout<<"\n";
    cout<< boolalpha <<a;   // Prints true/false instead of 1/0
    cout<<"\n";
    cout<< boolalpha <<b;
    
    return 0;
}
