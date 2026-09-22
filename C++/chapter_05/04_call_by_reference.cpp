#include<iostream>
using namespace std;

void swap(int* a, int* b);

// a and b are pointer variables.
// They will store the addresses of x and y.
void swap(int* a, int* b){
    // *a means: go to the address stored in a and access the value present at that address.
    // So, *a gives the value of x.
    int temp = *a;
    // *b gives the value of y.
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 5;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    swap(&x, &y); //This will swap x and y.
    // because *a and *b directly access x and y.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}