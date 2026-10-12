#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("jk3.txt");

    //creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;

    //writing a string toh the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("jk3.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    
    return 0;
}