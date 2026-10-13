#include<iostream>
#include<vector>
using namespace std;

/*
STL Components:

1. Containers:
Containers are used to store and organize data.
Examples: vector, list, map, stack and queue.

2. Iterators:
Iterators are used to refer to elements in a container
and help access or traverse those elements.
Example: begin() returns an iterator to the first element.

3. Algorithms:
Algorithms are ready-made functions used to perform operations
on data, such as sorting, searching and reversing.
Examples: sort(), find() and reverse().
*/


void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

        // at(i) accesses the element at index i, just like v[i].
        // The difference is that at(i) checks whether the index is valid.
        // If the index is out of range, at(i) throws an exception, whereas v[i] does not.
        // cout<<v.at(i)<<" ";  
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1;
    int element, size;

    cout<<"Enter the size of your vector : "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an elememt to add to this vector : "<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);

    // An iterator refers to a position in a container.
    // vector<int>::iterator is the iterator type used for vector<int>.
    // begin() returns an iterator pointing to the first element.
    vector<int> :: iterator iter = vec1.begin();

    // Insert 45 at the position pointed to by iter.
    // Since iter points to the first element, 45 is inserted at the beginning.
    // vec1.insert(iter, 45);
    // display(vec1);

    // Insert five copies of 34 at the position pointed to by iter.
    // vec1.insert(iter, 5, 34);
    // display(vec1);

    // iter + 1 refers to the position immediately after the first element. 
    // Insert three copies of 55 at that position.
    // Existing elements at and after this position shift to the right.
    vec1.insert(iter+1, 3, 55);
    display(vec1);
    
    return 0;
}