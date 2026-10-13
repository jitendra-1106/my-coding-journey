#include<iostream>
#include<vector>
using namespace std;


// Template function that can display vectors of different data types.
// T is replaced by the actual data type, such as int or char.
template <class T>
void display(vector<T> &v){

    // Display a heading before printing the vector elements.
    cout<<"Displaying this vector "<<endl;

    // Traverse the vector using indexes from 0 to (size-1).
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size = 5;
    //Ways to create a vector:

    // Create an empty integer vector with 0 elements.
    vector<int> vec1; //zero length integer vector.
    display(vec1);

    // Create a character vector with 4 elements.
    // All four elements are initially null characters ('\0').
    vector<char> vec2(4); //4-element character vector.
    // Add the character '5' at the end. 
    // The vector now contains 5 elements.
    vec2.push_back('5');
    display(vec2);
    cout<<"The size after adding one more element : "<<vec2.size()<<endl;

    // Create a new vector by copying all elements of vec2. 
    // vec3 initially has the same 5 elements as vec2.
    vector<char> vec3(vec2); //4-element character vector from vec2.
    display(vec3);

    // Create an integer vector with 6 elements, each initialized to 3
    vector<int> vec4(6, 3); //6-element vector of 3's.
    display(vec4);

    return 0;
}