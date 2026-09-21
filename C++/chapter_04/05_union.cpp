#include<iostream>
using namespace std;

// Union is used when we need to save memory and only one value is needed at a time.
union money
{
    // All three members share the same memory location.
    // Only one member should be considered valid at a time.
    int rice;
    float num;
    char car;
};

int main(){
    union money m1 , m2;

    // Stores 35 in the shared memory.
    m1.rice = 35;

    // Overwrites the same memory with the float value 90.8.
    // The previous value of rice is no longer valid.
    m1.num = 90.8;

    // Again overwrites the same memory with the character 'j'.
    // Now car is the active/valid member.
    m1.car = 'j';

    // Reading rice now interprets the same memory as an int.
    // This does NOT give the original 35.
    cout<<m1.rice<<endl;

    // Reading num interprets the same memory as a float.
    // This is also not the original 90.8.
    cout<<m1.num<<endl;

    // car is the last member assigned, so this gives 'j'.
    cout<<m1.car<<endl;

    return 0;
}

// struct → each member gets separate memory.
// union → all members share the same memory.