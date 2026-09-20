#include<iostream>
using namespace std;

int main(){
    int i = 0;
    while (i<10)
    {
        cout<<(i+1)*5<<endl;
        i++;
    }
    cout<<endl;

    int j = 0;
    do
    {
        cout<<(j+1)*6<<endl;
        j++;
    } while (j<10);
    cout<<endl;

    int k = 0;
    for (int k = 0; k < 10; k++)
    {
        cout<<(k+1)*7<<endl;
    }
    
    return 0;
}