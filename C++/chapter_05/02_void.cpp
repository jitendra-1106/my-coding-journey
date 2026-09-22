#include<iostream>
using namespace std;

void j(void);
//void j();

void j(){
    cout<<"This will not return any value"<<endl;
}

int main(){
    j();//Function call
    return 0;
}