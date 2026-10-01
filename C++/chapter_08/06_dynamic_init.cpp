#include<iostream>
using namespace std;

//Dynamic Initialization of Objects Using Constructors.
/* Dynamic initialization means that the values used to initialize
the object are provided during program execution.
Here, p, y and r are entered by the user at runtime.
These runtime values are then passed to the constructor.
*/

class Bankdeposit{

    int principle;  // Initial amount deposited in the bank
    int years;     // Number of years
    float interestrate; // Interest rate in decimal form, e.g. 0.04 = 4%
    float returnvalue; // Final amount after applying interest

    public:

    // Default constructor.
    // It is used when an object is created without arguments.
    Bankdeposit(){}

    // Constructor for interest rate given in decimal form.
    Bankdeposit(int p, int y, float r); // r can be a value like 0.04

    // Constructor for interest rate given directly in percentage.
    Bankdeposit(int p, int y, int r); // r can be a value like 4(in %).

    // Function to display the deposit details.
    void show();

};

// Constructor 1:
// Called when the third argument is a float.
Bankdeposit :: Bankdeposit(int p, int y, float r){

    principle = p; // Store p in the object's principle
    years = y;  // Store y in the object's years
    interestrate = r; // Store decimal interest rate

    // Initially, the return value is equal to the principal.
    returnvalue = principle;

    // Apply compound interest once for every year.
    for (int i = 0; i < y; i++){

        // Add the interest to the current amount.
        returnvalue = returnvalue*(1+interestrate);

    }
    
}

// Constructor 2:
// Called when the third argument is an int.
Bankdeposit :: Bankdeposit(int p, int y, int r){

    principle = p; // Store p in the object's principle
    years = y;  // Store y in the object's years
    interestrate = (float(r)/100); // Convert percentage into decimal.

    // Initially, return value is equal to principal.
    returnvalue = principle;

    // Apply compound interest once for every year.
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+interestrate);

    }
    
}

// Display the values stored in the object.
void Bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}

int main(){

    // Three objects are created using the default constructor.
    // bd1 and bd2 are later initialized with actual values.
    // bd3 remains with its default constructor state because we do not use it.
    Bankdeposit bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r:"<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y and R:"<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}

/*
1). If the default constructor is removed:
Bankdeposit(){} is no longer available.
Therefore, objects like Bankdeposit bd1, bd2, bd3;cannot be created without passing constructor arguments.
The compiler will give an error because no matching ,zero-argument constructor is available.

2). If we create objects directly with constructor arguments:
Bankdeposit bd1(10000, 2, 0.04);
Bankdeposit bd2(5000, 3, 4);
then the default constructor is not required.
Each object directly calls the appropriate parameterized constructor.

3). If an object is created but never initialized with a parameterized constructor, its data members do not get
meaningful values from the empty default constructor.
Calling show() on such an object can produce indeterminate/undefined results.

4). The number of objects does not decide whether a default constructor is needed.
What matters is HOW the objects are created.
Bankdeposit bd1, bd2;          -> needs Bankdeposit()
Bankdeposit bd1(10000, 2, 4);   -> does not need Bankdeposit()
because arguments are provided directly.
*/