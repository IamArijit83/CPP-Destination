// ----------------------------------------------------------------------Weekly Test-1----------------------------------------------------------------------
// Loops,switch case,if-else, Arrays, Structures, Pointers, unions, enums
// Problem-1
// #include <iostream>
// using namespace std;

// int main() {
//     const int popcornPrice = 100;
//     const int coldDrinkPrice = 50;
//     const int burgerPrice = 120;
//     float discount = 0.10;
//     int choice, qty;
//     float total = 0;

//     cout << "--------------------------- Welcome to One8 Movies ---------------------------\n";

//     char more;
//     do {
//         cout << "\nMenu:\n";
//         cout << "1. Popcorn (Rs.100)\n2. Cold Drink (Rs.50)\n3. Burger (Rs.120)\n4. Checkout\n";
//         cout << "Select your snack: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter number of popcorn(s): ";
//                 cin >> qty;
//                 total += popcornPrice * qty;
//                 cout << qty << " Popcorn(s) added!\n";
//                 break;

//             case 2:
//                 cout << "Enter number of cold drink(s): ";
//                 cin >> qty;
//                 total += coldDrinkPrice * qty;
//                 cout << qty << " Cold drink(s) added!\n";
//                 break;

//             case 3:
//                 cout << "Enter number of burger(s): ";
//                 cin >> qty;
//                 total += burgerPrice * qty;
//                 cout << qty << " Burger(s) added!\n";
//                 break;

//             case 4:
//                 {
//                     char idCard;
//                     cout << "\nDo you have a Student ID card (y/n)? ";
//                     cin >> idCard;

//                     if (idCard == 'y' || idCard == 'Y') {
//                         cout << "Student Discount Applied (10%)!\n";
//                         total = total - (total * discount);
//                     }

//                     cout << "\n------------------ Bill Summary ------------------\n";
//                     cout << "Total Amount to Pay: Rs" << total << endl;
//                     cout << "--------------------------------------------------\n";
//                     cout << "Thank you for visiting One8 Movies!\n";
//                     return 0;
//                 }

//             default:
//                 cout << "Invalid choice! Please select again.\n";
//         }

//         cout << "\nDo you want to add more items? (y/n): ";
//         cin >> more;

//     } while (more == 'y' || more == 'Y');

//     // Final checkout in case user didn’t select 4
//     char idCard;
//     cout << "\nDo you have a Student ID card (y/n)? ";
//     cin >> idCard;

//     if (idCard == 'y' || idCard == 'Y') {
//         cout << "Student Discount Applied (10%)!\n";
//         total = total - (total * discount);
//     }

//     cout << "\n------------------ Bill Summary ------------------\n";
//     cout << "Total Amount to Pay: Rs" << total << endl;
//     cout << "--------------------------------------------------\n";
//     cout << "Thank you for visiting One8 Movies!\n";

//     return 0;
// }



// Problem-2
// #include <iostream>
// using namespace std;

// struct ATM {
//     int balance;
//     int withdraw;
// };

// int main() {
//     ATM one8;
//     one8.balance = 10000; 
//     int choice;
//     char yn;

//     cout << "--------------------------------------------- Welcome to One8 ATM ---------------------------------------------\n";

//     do {
//         cout << "\nMenu:\n";
//         cout << "1. Withdraw Cash\n2. Check Balance\n3. Exit\n";
//         cout << "Select your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter amount to withdraw: Rs.";
//                 cin >> one8.withdraw;

//                 if (one8.withdraw > one8.balance) {
//                     cout << "Withdrawal amount exceeds available balance!\n";
//                 } else if (one8.withdraw <= 0) {
//                     cout << "Invalid amount!\n";
//                 } else {
//                     one8.balance -= one8.withdraw;
//                     cout << "Withdrawal Successful! You withdrew Rs." << one8.withdraw << endl;
//                     cout << "Remaining Balance: Rs." << one8.balance << endl;
//                 }
//                 break;

//             case 2:
//                 cout << "Please wait while we check your A/C balance...\n";
//                 cout << "Current Balance: Rs." << one8.balance << endl;
//                 break;

//             case 3:
//                 cout << "Thank you for banking with One8 ATM!\n";
//                 break;

//             default:
//                 cout << "Invalid choice! Please select a valid option.\n";
//         }

//         cout << "\nDo you want to continue (y/n)? ";
//         cin >> yn;

//     } while (yn == 'y' || yn == 'Y');

//     cout << "Thank you for using One8 ATM!\n";
//     return 0;
// }



// Problem-3
// #include <iostream>
// #include <cstring>
// using namespace std;

// struct Student {
//     enum ResultType { Marks = 1, Grade, Percent } type;
//     union {
//         float marks;
//         char grade[4];
//         float percentage;
//     } result;
// };

// int main() {
//     int n;
//     cout << "------------------------- Student Result System -------------------------\n";
//     cout << "Enter total number of students: ";
//     cin >> n;

//     Student s[100]; // limit to 100 students

//     // Input Phase
//     for (int i = 0; i < n; i++) {
//         int c;
//         cout << "\nStudent " << i + 1 << ":\n";
//         cout << "1. Enter Marks\n2. Enter Grade\n3. Enter Percentage\n";
//         cout << "Enter your choice (1-3): ";
//         cin >> c;

//         s[i].type = static_cast<Student::ResultType>(c);

//         switch (s[i].type) {
//             case Student::Marks:
//                 cout << "Enter Marks (0 - 100): ";
//                 cin >> s[i].result.marks;
//                 if (s[i].result.marks < 0 || s[i].result.marks > 100) {
//                     cout << "Invalid marks! Defaulting to 0.\n";
//                     s[i].result.marks = 0;
//                 }
//                 break;

//             case Student::Grade:
//                 cout << "Enter Grade (A, B+, C, etc.): ";
//                 cin >> s[i].result.grade;
//                 if (strlen(s[i].result.grade) >= sizeof(s[i].result.grade)) {
//                     s[i].result.grade[sizeof(s[i].result.grade) - 1] = '\0';
//                 }
//                 break;

//             case Student::Percent:
//                 cout << "Enter Percentage (0.0 - 100.0): ";
//                 cin >> s[i].result.percentage;
//                 if (s[i].result.percentage < 0 || s[i].result.percentage > 100) {
//                     cout << "Invalid percentage! Defaulting to 0.\n";
//                     s[i].result.percentage = 0;
//                 }
//                 break;

//             default:
//                 cout << "Invalid choice! Skipping this student.\n";
//                 s[i].type = Student::Marks;
//                 s[i].result.marks = 0;
//                 break;
//         }
//     }

//     // Output Phase
//     cout << "\n------------------------- Student Results Summary -------------------------\n";
//     for (int i = 0; i < n; i++) {
//         cout << "Student " << i + 1 << ": ";
//         switch (s[i].type) {
//             case Student::Marks:
//                 cout << "Marks = " << s[i].result.marks << "/100";
//                 break;
//             case Student::Grade:
//                 cout << "Grade = " << s[i].result.grade;
//                 break;
//             case Student::Percent:
//                 cout << "Percentage = " << s[i].result.percentage << "%";
//                 break;
//         }
//         cout << endl;
//     }

//     cout << "--------------------------------------------------------------------------\n";
//     return 0;
// }



// Problem-4
// #include<iostream>
// using namespace std;

// enum Paymenttype{UPI=1,Card,Cash};

// union Paymentinfo{
//     char upi[30];
//     long int cardno;
//     float cash_amt;
// };

// struct Transaction{
//     Paymentinfo info;
//     Paymenttype type;
// };

// int main(){
//     Transaction t[100];
//     char yn;
//     int n,c=0;
//     cout<<"------------------------------Digital Wallet System------------------------------\n";
//     do{
//         cout<<"1.UPI \n2.Card \n3.Cash\n";
//         cout<<"Enter your choice: ";
//         cin>>n;
//         t[c].type =static_cast<Paymenttype>(n);
//         switch(t[c].type){
//             case UPI:
//                 cout<<"Enter your UPI ID: ";
//                 cin>>t[c].info.upi;
//                 break;

//             case Card:
//                 cout<<"Enter your Card no.: ";
//                 cin>>t[c].info.cardno;
//                 break;

//             case Cash:
//                 cout<<"Enter Cash Amount Rs.";
//                 cin>>t[c].info.cash_amt;
//                 break;

//             default:
//                 cout<<"\nInvalid Choice! \n";
//                 continue;
//         }
//         c++;
//         cout<<"\nDo you want to enter more transactions?(y/n):";
//         cin>>yn;
//     }while(yn=='y'||yn=='Y');

//     cout<<"------------------------Account Summary------------------------\n";
//     for(int i=0;i<c;i++){
//         cout<<"Transaction "<<i+1<<": ";
//         switch(t[i].type){
//             case UPI:
//                 cout<<"UPI Payment- UPI ID: "<<t[i].info.upi<<endl;
//                 break;

//             case Card:
//                 cout<<"Card Payment- Card No.: "<<t[i].info.cardno<<endl;
//                 break;

//             case Cash:
//                 cout<<"Cash Payment- Cash Amount: "<<t[i].info.cash_amt<<endl;
//                 break;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Problem-5
// #include<iostream>
// #include<string>
// using namespace std;

// enum producttype{Grocery=1,Electronics,Clothing};

// union productinfo{
//     float weight;
//     int warranty;
//     char size[6];
// };

// struct product{
//     string name;
//     int quantity;
//     float price;
//     producttype type;
//     productinfo info;
// };

// int main(){
//     char yn;
//     int c=0,n;
//     float total=0;
//     product p[100];
//     cout<<"-----------------------------Welcome to One8 Superstore-----------------------------\n";
//     do{
//         cout<<"Enter name of the Product: ";
//         cin>>p[c].name;
//         cout<<"Enter Quantity of the Product: ";
//         cin>>p[c].quantity;
//         cout<<"Enter price of the Product: ";
//         cin>>p[c].price;
//         cout<<"\nSelect Product Type: \n";
//         cout<<"1.Grocery \n2.Electronics \n3.Clothing\n";
//         cout<<"Enter your choice: ";
//         cin>>n; 
//         p[c].type=static_cast<producttype>(n);

//         switch(p[c].type){
//             case Grocery:
//                 cout<<"Enter Weight in Kg.";
//                 cin>>p[c].info.weight;
//                 break;

//             case Electronics:
//                 cout<<"Enter Warranty Period in Years: ";
//                 cin>>p[c].info.warranty;
//                 break;

//             case Clothing:
//                 cout<<"Enter the size of the cloth: ";
//                 cin>>p[c].info.size;
//                 break;

//             default:
//                 cout<<"Invalid choice try again!";
//                 continue;
//         }
//         total+=p[c].quantity*p[c].price;
//         c++;

//     }while(yn=='y'||yn=='Y');
    
//     float discount=0;
//     if(total>5000){
//         discount+=0.10;
//     }
//     if(c>5){
//         discount+=0.05;
//     }


//     float tototal=total-(total*discount);

//     cout << "\n---------------- Product List ----------------\n";
//     for (int i = 0; i < c; i++) {
//         cout << i + 1 << ". " << p[i].name << " (x" << p[i].quantity << ") - Rs." << p[i].price << " each | ";

//         switch (p[i].type) {
//             case Grocery:
//                 cout << "Weight: " << p[i].info.weight << " kg";
//                 break;
//             case Electronics:
//                 cout << "Warranty: " << p[i].info.warranty << " years";
//                 break;
//             case Clothing:
//                 cout << "Size: " << p[i].info.size;
//                 break;
//         }
//         cout << endl;
// }

//     cout<<"---------------Bill Summary---------------\n";
//     cout<<"Total before Discount: Rs."<<total<<endl;
//     cout<<"Discount Applied: "<<discount*100<<endl;
//     cout<<"Total after Discount: Rs. "<<tototal<<endl;
//     cout<<"--------------------------------------------";


// return 0;
// }