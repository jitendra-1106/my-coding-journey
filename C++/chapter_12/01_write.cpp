#include<iostream>
#include<fstream>
using namespace std;

/*
(a).These are some useful classes for working with files in C++:

1.fstreambase: Used for both reading and writing data in a file.
2.ifstream(Input File Stream):
   -->Used to read data from a file.
   -->derived from fstreambase.
3.ofstream(Output File Stream):
   -->Used to write data into a file.
   -->derived from fstreambase. 


(b).In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1.Using the constructor
2.Using the member function open() of the class
*/

int main(){
    string st = "Jitendra kumar";

    /*Create an ofstream object named 'jk'.
    'ofstream' is a class provided by the <fstream> header.
    'jk' is simply the name of the object; we can choose
    any valid name, such as 'out', 'file' or 'myFile'.*/

    /*The constructor of 'ofstream' opens the file "jk1.txt"
    for writing. If the file does not exist, it is created.
    If it already exists, its previous contents are replaced.*/
    ofstream jk("jk1.txt");

    // Write the string stored in 'st' into the file.
    // The insertion operator (<<) sends the string to the file.
    jk<<st;

    //OR:
    // Opening files using constructor and writing in it
    // ofstream out("jk1.txt"); // Write operation
    // out<<st;
    
    return 0;
}