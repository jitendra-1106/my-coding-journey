#include <iostream>
using namespace std;

//-->enum is used to give meaningful names to a fixed set of related values.
int main(){
    // enum creates a user-defined type with a fixed set of named values.
    // By default, the values start from 0:
    // breakfast = 0, lunch = 1, dinner = 2.
    enum meal{breakfast, lunch, dinner};

    // m1 is a variable of type 'meal'.
    // Here, m1 stores the value 'lunch', whose numeric value is 1.
    meal m1 = lunch;
    // Compares m1 with 1.
    // Since lunch = 1, the condition is true, so it prints 1.
    cout<<(m1==1);

    // cout<<breakfast; //0
    // cout<<lunch;  //1
    // cout<<dinner; //2

    return 0;
}