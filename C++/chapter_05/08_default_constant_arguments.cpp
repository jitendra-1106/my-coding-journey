#include<iostream>
using namespace std;
/*
// const char *p means p is a pointer to a constant character.
// The value pointed to by p cannot be changed through p.
int strlen(const char *p){
    return.....;
}
// const makes the value pointed to by p read-only inside the function.
*/


//A default argument provides a value automatically when no argument is passed for that parameter.
float moneyreceived(int currentmoney, float factor = 1.04){
    // factor has a default value of 1.04 if no value is passed.
    return currentmoney*factor;
}


int main(){

    int money = 100000;

    // Uses the default value of factor (1.04).
    cout<<"If you have "<<money<<" rs in your bank account , you will recive "<<moneyreceived(money)<<" rs after one year"<<endl;

    // 1.1 is a constant value passed directly as the second argument.
    // It replaces the default value 1.04.
    cout<<"For VIP:If you have "<<money<<" rs in your bank account , you will recive "<<moneyreceived(money, 1.1)<<" rs after one year"<<endl;

    return 0;
}