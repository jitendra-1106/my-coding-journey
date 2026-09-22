#include<iostream>
using namespace std;

void swap(int a, int b);

void swap(int a, int b){ // a and b are copies of x and y.
    int temp = a;
    a = b;
    b = temp;

    // Only the copies are swapped, not the original x and y.
}

int main(){
    int x = 4, y = 5;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    swap(x, y); //This will not swap x and y.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
}