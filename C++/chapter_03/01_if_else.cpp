#include<iostream>
using namespace std;

/*
control structures:
1.sequence control structures
2.selection control structures--->
3.loop control structures
*/

int main(){

    int age;
    cout<<"Enter age:"<<endl;
    cin>>age;
    
    if(age<18){
        cout<<"Not eligible";
    }
    else if(age>=18 && age<45 ){
        cout<<"Eligible but not a senior citizen";
    }
    else if(age>=45 && age<=100){
        cout<<"Eligible and senior citizen";
    }
    else{
        cout<<"wrong context";
    }
    return 0;
}