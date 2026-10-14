#include<iostream>
#include<list>
using namespace std;

// Function to display all elements of a list.
// The list is passed by reference (&), so no copy of the list is created.
// An iterator moves through the list and *it accesses the current element.
void display(list<int> &lst){
    list<int> :: iterator it;
    // begin() points to the first element.
    // end() points to the position just after the last element.
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){
    list<int> list1;//list of 0 length
    
    // Insert elements at the end of the list.
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(6);
    list1.push_back(12);
    display(list1);

    //Removing elements from the list:
    // list1.pop_back();// Remove the last element (12).
    // display(list1);
    // list1.pop_front();// Remove the first element (7).
    // display(list1);
    // list1.remove(9);// Remove all occurrences of the value 9 from the list.
    // display(list1);

    //Sorting the list:
    // list1.sort();// Arrange the elements in ascending order.
    // display(list1);

    //Reversing the list:
    // list1.reverse();// Reverse the current order of the elements.
    // display(list1);

    // Create a list containing 3 default-initialized integers (0, 0, 0).
    list<int> list2(3);//Empty list of size 3
    list<int> :: iterator iter;// Declare an iterator to access list2 elements.
    iter = list2.begin();

    *iter = 45;
    *iter++;
    *iter = 6;
    *iter++;
    *iter = 9;
    *iter++;
    display(list2);
    // An iterator behaves like a pointer because it can access elements
    // using * and move between elements using ++.
    // However, an iterator is not necessarily a normal pointer.

    //Merging one list into another:
    // Merge list2 into list1.
    // list1.merge(list2) transfers the elements of list2 into list1.
    // After merging, list2 becomes empty.
    // list1.merge(list2);
    // cout<<"list1 after merging: ";
    // display(list1);

    // Sorting both lists before merging:
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);// Merge list2 into list1 in sorted order.
    // cout<<"sorted list's after merging: ";
    // display(list1);

    return 0;
}