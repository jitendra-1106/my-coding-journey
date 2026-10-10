#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;

    public:
    void setData(int a, int b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};
int main(){
    int size = 3;

    // Stores the address of the existing integer variable 'size' in ptr.
    // int* ptr = &size;
    // Dynamically allocates memory for an array of 3 integers and stores the address of the first element in ptr.
    // int* ptr = new int[3];

    /*
    1.Generalstore item
    2.Veggies item
    3.Hardware item
    */

    // Allocates memory for 3 Shop objects, just like creating an array of 3 integers,
    // and stores the address of the first Shop object in ptr.
    // Using ptr++, we can move to the next Shop object, just like moving through an integer array.
    ShopItem* ptr = new ShopItem[size];

    int p, i;
    float q;

    // Creates a temporary pointer to preserve the starting address of the first ShopItem object,
    // because ptr moves forward using ptr++ in the first loop.
    // ptrTemp is used in the second loop to access and display all objects from the beginning.
    ShopItem* ptrTemp = ptr;
    
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }

     for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}