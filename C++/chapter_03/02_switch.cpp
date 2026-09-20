#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;

    switch(num){
        case 1:
               cout<<"You entered one";
               break;
        case 2:
               cout<<"You entered two";
               break;
        case 3:
               cout<<"You entered three";
               break;
        case 4:
               cout<<"You entered four";
               break;
        default:
               cout<<"Not matched";
               break;
    }
    return 0;
}