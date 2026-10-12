#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st;

    /*Create an ifstream object named 'in' to read data from a file.
    'ifstream' is a class provided by the <fstream> header.
    'in' is just an object name; we can also use names like 'file', 'input' or 'myFile'.
    The constructor opens "jk2.txt" for reading.*/

    // Opening files using constructor and reading it
    ifstream in("jk2.txt"); // Read operation

    /*The extraction operator (>>) reads data from the file through 'in'
    and stores it in 'st'. It stops reading when whitespace is encountered,
    so only the first word is stored in 'st'.*/
    // in >> st;

    /*'getline()' reads an entire line from the file and stores
    it in the string variable 'st'.
    Unlike 'in >> st', which stops reading at whitespace,
    'getline()' can read spaces between words.*/
    getline(in, st);

    // Display the data stored in 'st' on the console.
    cout<<st;

    return 0;

}