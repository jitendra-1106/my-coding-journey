#include<iostream>
using namespace std;

class shop{
    // Define data members once in the class.
    // We do not need to define them again for every object.
    
    int itemid[100]; // Stores IDs of up to 100 items
    int itemprice[100]; // Stores prices of up to 100 items
    int counter; // Stores the current array index

    public:
    void initcounter(void){ counter = 0;} // Start from index 0
    void setprice(void);
    void displayprice(void);
};

/*
When an object is created, it gets its own separate memory for these data members.
Example: shop dukaan1; shop dukaan2; 
Both objects use the same class definition, 
but each object has its own itemid, itemprice and counter.
*/

void shop :: setprice(void){

    // counter + 1 is used only to show the item number to the user.
    cout<<"Enter id of your item no "<<counter+1<<endl;

    // counter's value is used as the array index
    cin>>itemid[counter];

    cout<<"Enter price of your item"<<endl;
    // Store the price at the same index
    cin>>itemprice[counter];

    // Move to the next array index
    counter++;
}

void shop :: displayprice(void){
    // Print all items that have been stored
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}
int main(){
    shop dukaan;
    // Set counter to 0
    dukaan.initcounter();
    // counter = 0 → itemid[0], itemprice[0]
    dukaan.setprice();
    // counter = 1 → itemid[1], itemprice[1]
    dukaan.setprice();
    // counter = 2 → itemid[2], itemprice[2]
    dukaan.setprice();

    dukaan.displayprice();
    
    return 0;
}