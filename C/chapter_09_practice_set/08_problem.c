#include <stdio.h>
#include <string.h>

struct account
{

   long long Account_Number;   // Stores the customer's account number 
    char IFSC_Code[20];         // Stores the bank's IFSC code
    char Customer_Name[50];     // Stores the customer's name
    char Father_Name[50];       // Stores the customer's father's name
    char Account_Type[50];      // Stores the type of account
    char Branch_Name[50];       // Stores the bank branch name
    char Branch_Address[50];    // Stores the branch address
    long long Mobile_Number;    // Stores the customer's mobile number
    char Email[50];             // Stores the customer's email
    char Address[100];          // Stores the customer's home address
    char Date_of_Birth[50];     // Stores the customer's date of birth
    float Balance;            // Stores the account balance
    char Nominee_Name[50];      // Stores the nominee's name
    char PAN_Number[20];        // Stores the customer's PAN number
    long long Aadhaar_Number;   // Stores the customer's Aadhaar number
    char Account_Opening_Date[20]; // Stores the account opening date
};  // long long = Stores a large integer value (%lld)

int main()
{
    struct account Acc1;
    Acc1.Account_Number = 9384744583787;
    strcpy(Acc1.IFSC_Code,"646gyrf885");
    strcpy(Acc1.Customer_Name, "Jitendra kumar");
    strcpy(Acc1.Father_Name,"Suresh kumar");
    strcpy(Acc1.Account_Type,"Saving");
    strcpy(Acc1.Branch_Name,"Baroda");
    strcpy(Acc1.Branch_Address,"Reengus");
    Acc1.Mobile_Number = 7609345298;
    strcpy(Acc1.Email,"jk123@gmail.com");
    strcpy(Acc1.Address,"dev nagar reengus");
    strcpy(Acc1.Date_of_Birth ,"23 dec 2004");
    Acc1.Balance = 34000;
    strcpy(Acc1.Nominee_Name,"manju devi");
    strcpy(Acc1.PAN_Number,"PN273737J");
    Acc1.Aadhaar_Number = 657483455764;
    strcpy(Acc1.Account_Opening_Date , "31 jan 2026");
    
    printf("%lld\n",Acc1.Account_Number);
    printf("%s \n",Acc1.IFSC_Code);
    printf("%s \n",Acc1.Customer_Name);
    printf("%s \n",Acc1.Father_Name);
    printf("%s \n",Acc1.Account_Type);
    printf("%s \n",Acc1.Branch_Name);
    printf("%s \n",Acc1.Branch_Address);
    printf("%lld\n",Acc1.Mobile_Number );
    printf("%s \n",Acc1.Email);
    printf("%s \n",Acc1.Address);
    printf("%s \n",Acc1.Date_of_Birth);
    printf("%.2f\n",Acc1.Balance);
    printf("%s \n",Acc1.Nominee_Name);
    printf("%s\n", Acc1.PAN_Number);
    printf("%lld\n", Acc1.Aadhaar_Number );
    printf("%s \n",Acc1.Account_Opening_Date);
    
    return 0;
}