#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Function objects(Functor) : Function wrapped in a class so that it available like an object.
// Function objects (functors) are objects of classes that overload
// the function call operator (), allowing them to be used like functions.

int main(){
    int arr[] = {2, 56, 4, 33, 76, 1};

    // Sort the array elements in ascending order.
    // arr points to the first element, and arr+5 points to the position
    // just after the fifth element, so only the first 5 elements are sorted.
    sort(arr, arr+5);

    // Sort the first 5 elements in descending order using a function object.
    // greater<int>() compares elements so that larger values come first.
    // sort(arr, arr+5, greater<int>());

    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}