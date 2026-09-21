#include<iostream>
using namespace std;

typedef struct employee{
    int id;
    float salary;
    char favchar;
}emp;

int main(){
    emp e1 , e2;
    e1.id = 67;
    e1.salary = 12000;
    e1.favchar = 'j';

    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.favchar<<endl;

    
    return 0;
}