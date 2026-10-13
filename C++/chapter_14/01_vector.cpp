#include<iostream>
#include<vector>
using namespace std;


/*
STL (Standard Template Library): 
STL provides ready-made containers, algorithms, and other tools in C++. 
These tools help us perform common operations without implementing everything from scratch.
*/


/*
Vector vs Array:
An array has a fixed size once it is created.
A vector can automatically grow or shrink as elements are added or removed.
A vector provides functions like push_back() and pop_back() to modify its elements easily. 
Both arrays and vectors allow access to elements using indexes.
*/


/*
This function receives the vector by reference.
'&' allows it to access the original vector without creating a copy. 
It displays all elements currently present in the vector.
*/
void display(vector<int> &v){

    // Start from index 0 and continue until the last valid index. 
    // v.size() returns the current number of elements in the vector.
    for (int i = 0; i < v.size(); i++)
    {
        // Access and print the element stored at index i
        cout<<v[i]<<" ";  
    }
    cout<<endl;
    
}
int main(){
    // Create an empty vector that can store integer values. 
    // Its size is initially 0 and it can grow as elements are added.
    vector<int> vec1;

    int element, size;

    cout<<"Enter the size of your vector : "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an elememt to add to this vector : "<<endl;
        cin>>element;

        // Add the entered value to the end of the vector.
        // push_back() increases the vector's size by 1.
        vec1.push_back(element);
    }

    // Remove the last element from the vector. 
    // The vector's size decreases by 1.
    vec1.pop_back();

    // Pass the vector to display() to print its remaining elements.
    display(vec1);
    
    return 0;
}