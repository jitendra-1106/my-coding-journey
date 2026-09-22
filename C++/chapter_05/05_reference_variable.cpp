#include<iostream>
using namespace std;

void swapreference(int &a, int &b);

// &a and &b are reference variables.
// They are another names (aliases) for the original variables.
void swapreference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    swapreference(x, y); //This will swap x and y using reference variables.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}