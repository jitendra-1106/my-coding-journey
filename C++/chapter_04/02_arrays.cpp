#include <iostream>
using namespace std;

//-->Array = contiguous (continuous) memory blocks allocated for elements of the same data type.
//--->The array size is fixed, but the values of its elements can be changed.
    
int main(){
    int marks[] = {30, 40, 50, 60};  //int marks[4] = {30, 40, 50, 60};
    //int marks[4];
    //marks[0] = 30;
    //marks[1] = 40;
    //marks[2] = 50;
    //marks[3] = 60;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }

    marks[2] = 45;   // Changes the value of the existing array element.
    cout<<marks[2]<<endl;

    
    return 0;
}