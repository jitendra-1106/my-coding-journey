#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
// A map is an associative container that stores data as key-value pairs.
// Each key is unique and is associated with a value.

int main(){
    map<string, int> marksMap;// Create a map with string keys and integer values.
    
    // Insert key-value pairs using the key as an index.
    marksMap["Jitendra"] = 98;
    marksMap["keshav"] = 58;
    marksMap["aadish"] = 23;


    // Insert multiple key-value pairs into the map at once.
    // Each pair contains a key and its corresponding value.
    // marksMap.insert({pair_1,pair_2......pair_n});
    marksMap.insert({{"Radhey", 56}, {"Mohit", 47}});

    // Declare an iterator to access the map's key-value pairs.
    map<string, int> :: iterator iter;

    // Traverse the map from begin() to end().
    // A map stores its elements in ascending order of keys by default.
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){

        // first accesses the key, and second accesses its value.
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    // Return the number of key-value pairs currently stored in the map.
    cout<<"The size is : "<<marksMap.size()<<endl;

    // Return the maximum number of elements the map can theoretically hold.
    cout<<"The max size is : "<<marksMap.max_size()<<endl;

    // Return true (1) if the map is empty; otherwise, return false (0).
    cout<<"The empty return value is : "<<marksMap.empty()<<endl;

    return 0;
}