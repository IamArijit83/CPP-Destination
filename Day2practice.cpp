// ----------------------------------------Day-2 Basic Practice------------------------------------------------------------------
// Refernce, derefernce and Pointer practice-------------------------------------------------------------------------------------
// ATM PIN (Scenario-1)
// #include<iostream>
// using namespace std;
// int main(){
//     int pin;
//     cout<<"------------Welcome to One8 ATM----------------------"<<endl;
//     cout<<"Enter your ATM pin: ";
//     cin>>pin;
//     int *ptr=&pin;
//     cout<<"The address of your PIN is: "<<&pin<<endl;
//     *ptr=4433;
//     cout<<"Your new updated pin is: "<<*ptr;
// return 0;
// }

// Game (Scenario-2)
// #include<iostream>
// using namespace std;
// int main(){
//     int health=100,curr_health;
//     cout<<"Your Character health total was: "<<health<<"\n";
//     cout<<"Your Character took a punch!\n";
//     int *ptr = &health;
//     *ptr=*ptr-30;
//     cout<<"Your character's current health: "<<*ptr;
// return 0;
// }

// College System(Scenario-3)
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"---------------------------Welcome to One8 College---------------------------\n";
//     int studentcount=500;
//     cout<<"There are "<<studentcount<<" number of students!\n";
//     int *p1=&studentcount;
//     cout<<"The address of studentcount is: "<<&studentcount<<endl;
//     cout<<"The address of P1 is: "<<&p1<<endl;
//     int **p2=&p1;
//     cout<<"The Value of P1 is: "<<**p2<<endl;
//     cout<<"The address of p2 is: "<<&p2<<endl;
// return 0;
// }


// Arrays-------------------------------------------------------------------------------------------------------------------
// Scenario-1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of Marks you want to enter: \n";
//     cin>>n;
//     int marks[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter marks: ";
//         cin>>marks[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<marks[i]<<" "<<endl;
//     }
    
// return 0;
// }

// Scenario-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of overs you bowled: \n";
//     cin>>n;
//     int overs[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter the runs conceeded in Over "<<i+1<<":"<<endl;
//         cin>>overs[i];
//     }
//     int total=0;
//     int max=overs[0];
//     for(int i=0;i<n;i++){
//         total+=overs[i];
//         if(max<overs[i]){
//             max=overs[i];
//         }
//     }
//     double average=(double)total/n;
//     cout<<"The total runs conceeded is: "<<total<<endl;
//     cout<<"The average runs conceeded per over is: "<<average<<endl;
//     cout<<"The highest run conceeded is: "<<max;
// return 0;
// }


// Scenario-3
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number of subjects: ";
//     cin>>n;
//     int marks[n];
//     for( i=0;i<n;i++){
//         cout<<"Enter the marks: ";
//         cin>>marks[i];
//     }
//     char yn;
//     int s;

//     cout<<"Do you want to change marks?(y/n)";
//     cin>>yn;
//     if(yn=='y'||yn=='Y'){
//         for(i=0;i<n;i++){
//             cout<<"Current Marks: "<<endl<<marks[i]<<endl;
//         }
//         cout<<"Enter which subject marks you want to change?";
//         cin>>s;
//         if(s>=1 && s<=n){
//             cout<<"Enter the new marks for the subject: ";
//             cin>>marks[s-1];
//             cout<<"New Updated Marks are: \n";
//             for(i=0;i<n;i++){
//                 cout<<marks[i]<<endl;
//             }
//         }
//     }
//     else{
//         cout<<marks[i];
//     }
// return 0;
// }


// Scenario-4
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number of battles: ";
//     cin>>n;
//     int health[n];
    
//     for(i=0;i<n;i++){
//         cout<<"Enter the health in battle "<<i+1<<" ";
//         cin>>health[i];
//     }
//     cout<<"The health stats are: \n";
//     for(i=0;i<n;i++){
//         cout<<health[i]<<endl;
//     }

//     int total=0;
//     for(i=0;i<n;i++){
//         total+=health[i];
//     }
//     double avg=((double)total)/n;
//     cout<<"The Average after health drop is: "<<avg<<endl;
//     for(i=0;i<n;i++){
//         health[i]+=10;
//         cout<<"The updated health after boosting are:"<<health[i]<<endl;
//     }
    
// return 0;
// }


// Pointers and Arrays-------------------------------------------------------------------------------------------------------
// Scenario-1
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
    
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cout<<"Enter element "<<i+1<<endl;
//         cin>>arr[i];
//     }
//     int *p=arr;
//     for(i=0;i<n;i++){
//         cout<<"The elements entered are: "<<(*p)<<endl;
//         *p++;
//     }
// return 0;
// }


// Scenario-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number of levels: ";
//     cin>>n;
//     int game[n];
//     int *p=game;
//     for(i=0;i<n;i++){
//         cout<<"Enter XP at level "<<(i+1)<<" ";
//         cin>>*(p+i);
        
//     }
//     for(i=0;i<n;i+=2){
//         *(p + i)+=50;
//         cout<<"Updated Points: "<<game[i]<<endl;
//     }

//     int total=0;
//     for(i=0;i<n;i++){
//         total+=*(p+i);
//     cout<<"Total Points: "<<total<<endl;
//     }
    
// return 0;
// }


// Scenario-3
// #include<iostream>
// using namespace std;
// int main(){
//     int days[5],i;
//     int *p=days;
//     for(i=0;i<5;i++){
//         cout<<"Enter the stock price on Day "<<i+1<<" ";
//         cin>>*(p+i);
//     }
//     int low=days[0];
//     for(i=0;i<5;i++){
//         if(low>*(p+i)){
//             low=*(p+i);
//         }
//     }
//     cout<<"The Minimum Price is "<<low<<endl;
//     int total=0;
//     for(i=0;i<5;i++){
//         total+=*(p+i);
//     }
//     double avg=double(total)/5;
//     cout<<"The average price of the stock is: "<<avg;
    
// return 0;
// }

// Scenario-4
// #include<iostream>
// using namespace std;

// int main() {
//     int temp[7];           // stores temperatures for 7 days
//     int *p = temp;         // pointer pointing to the start of the array
//     int i;

//     cout << "-----Weekly Temperature Report-------\n";
    
//     // Input temperatures
//     for (i = 0; i < 7; i++) {
//         cout << "Enter temperature for Day " << i + 1 << ": ";
//         cin >> *(p + i);   // taking input using pointer arithmetic
//     }

//     cout << "\nRecorded Temperatures:\n";
//     for (i = 0; i < 7; i++) {
//         cout << "Day " << i + 1 << ": " << *(p + i) << "*C\n";
//     }

//     // Apply +2°C correction
//     for (i = 0; i < 7; i++) {
//         *(p + i) += 2;     // directly modifying array values using pointers
//     }

//     cout << "\nCorrected Temperatures (+2*C applied):\n";
//     for (i = 0; i < 7; i++) {
//         cout << "Day " << i + 1 << ": " << *(p + i) << "*C\n";
//     }

//     // Calculate weekly average
//     int total = 0;
//     for (i = 0; i < 7; i++) {
//         total += *(p + i);   // accumulate using pointer
//     }
//     double avg = (double)total / 7;

//     cout << "\nWeekly Average Temperature: " << avg << "*C\n";

//     return 0;
// }


// Scenario-5
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number of orders: ";
//     cin>>n;
//     int orders[n];
//     int* p=orders;
//     // Input of prices
//     for(i=0;i<n;i++){
//         cout<<"Enter the amount for Dish "<<i+1<<" ";
//         cin>>*(p+i);
//     }
//     // Displaying the prices
//     for(i=0;i<n;i++){
//         cout<<*(p+i)<<endl;
//     }
//     // calculate total bill
//     int total=0;
//     for(i=0;i<n;i++){
//         total+=*(p+i);
//     }
//     cout<<"The total bill amount stands Rs."<<total<<endl;
//     // Applying 10% off on each items
//     double dis=0.10;
//     for(i=0;i<n;i++){
//         *(p+i)-=*(p+i)*dis;
//     }
//     cout<<"Updated price after applying discount is: "<<endl;
//     for(i=0;i<n;i++){
//         cout<<"Updated price of Dish "<<i+1<<" is Rs."<<*(p+i)<<endl;
//     }
// return 0;
// }


// Structures------------------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<string>
// using namespace std;

// struct Student {
//     int roll;
//     string name;
//     float marks[3];  // for 3 subjects
//     float avg;
// };

// int main() {
//     int n;
//     cout << "Enter number of students: ";
//     cin >> n;

//     Student s[n]; // array of structure

//     // Input section
//     for(int i = 0; i < n; i++) {
//         cout << "\nEnter details for Student " << i + 1 << endl;
//         cout << "Name: ";
//         cin >> s[i].name;
//         cout << "Roll No: ";
//         cin >> s[i].roll;

//         float total = 0;
//         for(int j = 0; j < 3; j++) {
//             cout << "Enter marks for Subject " << j + 1 << ": ";
//             cin >> s[i].marks[j];
//             total += s[i].marks[j];
//         }
//         s[i].avg = total / 3.0;
//     }

//     // Output section
//     cout << "\n---------- Student Report ----------\n";
//     for(int i = 0; i < n; i++) {
//         cout << "Name: " << s[i].name << endl;
//         cout << "Roll No: " << s[i].roll << endl;
//         cout << "Average Marks: " << s[i].avg << endl;
//         cout << "-------------------------------\n";
//     }

//     return 0;
// }


// Same problem using pointers-----------------------------
// #include<iostream>
// #include<string>
// using namespace std;

// struct Student {
//     int roll;
//     string name;
//     float marks[3];  // for 3 subjects
//     float avg;
// };

// int main() {
//     int n;
//     cout << "Enter number of students: ";
//     cin >> n;

//     Student s[n]; // array of structure
//     Student *p=s;

//     // Input section
//     for(int i = 0; i < n; i++) {
//         cout << "\nEnter details for Student " << i + 1 << endl;
//         cout << "Name: ";
//         cin >> (p+i)->name;
//         cout << "Roll No: ";
//         cin >> (p+i)->roll;

//         float total = 0;
//         for(int j = 0; j < 3; j++) {
//             cout << "Enter marks for Subject " << j + 1 << ": ";
//             cin >>(p+i)->marks[j];
//             total += (p+i)->marks[j];
//         }
//         s[i].avg = total / 3.0;
//     }

//     // Output section
//     cout << "\n---------- Student Report ----------\n";
//     for(int i = 0; i < n; i++) {
//         cout << "Name: " << (p+i)->name << endl;
//         cout << "Roll No: " <<(p+i)->roll << endl;
//         cout << "Average Marks: " << (p+i)->avg << endl;
//         cout << "-------------------------------\n";
//     }

//     return 0;
// }


// Scenario-3
// #include<iostream>
// #include<string>
// using namespace std;

// struct college{
//     string name, branch;
//     int roll;

//     struct address{
//         string city;
//         int pincode;
//     }add;
// };

// int main(){
//     int n;

//     cout<<"Enter the number of students: ";
//     cin>>n;

//     college c[n];
//     college *p=c;

//     int stud[n],i,j;
//     for(i=0;i<n;i++){
//         cout<<"Enter Name: ";
//         cin>>(p+i)->name;

//         cout<<"Enter branch: ";
//         cin>>(p+i)->branch;

//         cout<<"Enter roll no.: ";
//         cin>>(p+i)->roll;

//         cout<<"Enter city: ";
//         cin>>(p+i)->add.city;

//         cout<<"Enter Pincode: ";
//         cin>>(p+i)->add.pincode;
//     }

//     for(i=0;i<n;i++){
//         cout<<"College Database-----------------------\n";
//         cout<<endl;
//         cout<<"Details of Student "<<i+1<<endl;
//         cout<<"Name: "<<(p+i)->name<<endl;
//         cout<<"Branch: "<<(p+i)->branch<<endl;
//         cout<<"Roll No,: "<<(p+i)->roll<<endl;
//         cout<<"City: "<<(p+i)->add.city<<endl;
//         cout<<"Pincode: "<<(p+i)->add.pincode<<endl;
//     }
// return 0;
// }


// Scenario-4
// #include<iostream>
// #include<string>
// using namespace std;

// struct patient{
//     string name,disease;
//     int id, age;
//     float billamt;
// };

// int main(){
//     int n,i;
//     cout<<"Enter the number of patients: ";
//     cin>>n;

//     patient arr[n];
//     patient *p=arr;


//     cout<<"Enter Patient Details-------------------------------------------\n\n";
//     for(i=0;i<n;i++){
//         cout<<"Details of Patient "<<i+1<<": \n";
//         cout<<"Enter the name: ";
//         cin>>(p+i)->name;

//         cout<<"Enter the id: ";
//         cin>>(p+i)->id;

//         cout<<"Enter the disease: ";
//         cin>>(p+i)->disease;

//         cout<<"Enter the age: ";
//         cin>>(p+i)->age;

//         cout<<"Enter the Bill Amount: ";
//         cin>>(p+i)->billamt;
//     }
    
//     cout<<"Enter Patient Details-------------------------------------------\n\n";
//     for(i=0;i<n;i++){
//         cout<<"Details of Patient "<<i+1<<": \n\n";
//         cout<<"Name: "<<(p+i)->name<<endl;
//         cout<<"id: "<<(p+i)->id<<endl;
//         cout<<"disease: "<<(p+i)->disease<<endl;
//         if((p+i)->billamt>50000){
//             cout<<"Bill Amount: "<<(p+i)->billamt<<endl;
//         }
//     }
//     cout<<"---------------------------------------------------------------------";

// return 0;
// }


// Scenario-5
// #include<iostream>
// using namespace std;

// struct school {
//     string name;
//     int roll;
//     float avg;
//     float marks[3];
//     struct address {
//         string city;
//         int pincode;
//     } add;
// };

// int main() {
//     int n;
//     cout << "Enter the number of Student Details you want to enter: ";
//     cin >> n;

//     school s[n];
//     school *ptr = s;

//     for (int i = 0; i < n; i++) {
//         cout << "\nEnter details of Student " << i + 1 << ":\n";
//         cout << "Enter Name: ";
//         cin >> (ptr + i)->name;

//         cout << "Enter Roll: ";
//         cin >> (ptr + i)->roll;

//         cout << "Enter City: ";
//         cin >> (ptr + i)->add.city;

//         cout << "Enter Pincode: ";
//         cin >> (ptr + i)->add.pincode;

//         int total = 0;  

//         for (int j = 0; j < 3; j++) {
//             cout << "Enter Marks in Subject " << j + 1 << ": ";
//             cin >> (ptr + i)->marks[j];
//             total += (ptr + i)->marks[j];
//         }

//         (ptr + i)->avg = (float)total / 3.0;  
//     }

//     cout << "\n---------------- Student Details ----------------\n";

//     for (int i = 0; i < n; i++) {
//         cout << "\nDetails of Student " << i + 1 << ":\n";
//         cout << "Name: " << (ptr + i)->name << endl;
//         cout << "Roll: " << (ptr + i)->roll << endl;
//         cout << "City: " << (ptr + i)->add.city << endl;
//         cout << "Pincode: " << (ptr + i)->add.pincode << endl;

//         cout << "Marks: ";
//         for (int j = 0; j < 3; j++) {
//             cout << (ptr + i)->marks[j] << " ";
//         }
//         cout << "\nAverage Marks: " << (ptr + i)->avg << endl;
//     }

//     return 0;
// }


// Enums-----------------------------------------------------------------------------------------------------------------------------
// Scenario-1
// #include<iostream>
// using namespace std;
// int main(){
//     enum Movietype{TwoD=1,ThreeD,IMAX};
//     cout<<"The available movie formats are: \n\n";
//     cout<<TwoD<<endl;
//     cout<<ThreeD<<endl;
//     cout<<IMAX<<endl;
//     double price=0.0;
//     int tickets;
//     char yn;
//     cout<<"Do you want to watch a movie?(y/n)";
//     cin>>yn;
//     cout<<"----------------------------------Welcome to One8 Multiplex--------------------------------------"<<endl;
//     cout<<"Select Your choice: "<<endl;
//     cout<<"1.2D \n2.3D \n3.IMAX \n4.Exit\n";
//     int format;
//     if(yn=='y'||yn=='Y'){
//         cout<<"Which format do you want to watch?\n";
//         cin>>format;
//         cout<<"Enter the number of tickets: ";
//         cin>>tickets;

//         Movietype type=static_cast<Movietype>(format);
//         switch(format){
//             case TwoD:
//                 price=200;
//                 cout<<"You chose 2D movie"<<endl;
//                 break;
//             case ThreeD:
//                 price=250;
//                 cout<<"You chose a 3D movie"<<endl;    
//                 break;
//             case IMAX:
//                 price=300;
//                 cout<<"You chose an IMAX movie"<<endl;
//                 break;
//             default:
//                 cout<<"Invalid Choice!";
//                 break;
//             }
//     }
//     double total=price*tickets;
//     cout << "---------------------------------------------------------------\n";
//     cout << "Ticket Price: " << price << endl;
//     cout << "Number of Tickets: " << tickets << endl;
//     cout << "Total Amount to Pay: " << total << endl;
//     cout << "---------------------------------------------------------------\n";
//     cout << " Enjoy your movie at One8 Multiplex! \n";
// return 0;
// }


// Scenario-2
// #include<iostream>
// using namespace std;
// int main(){
//     enum Grade{Fail=1,Pass,Merit,Distinction};
//     double marks;
//     Grade result;
//     cout<<"------------------------Result Analyzer---------------------\n";
//     cout<<"Enter your Marks: "<<endl;
//     cin>>marks;
//     if(marks>=90){
//         result=Merit;
//     }
//     else if(marks>=75){
//         result=Distinction;
//     }
//     else if(marks>=60){
//         result=Pass;
//     }
//     else{
//         result=Fail;
//     }

//     switch(result){
//         case Merit:
//             cout<<"You got Merit! Congratulations! "<<endl;
//             break;
        
//         case Distinction:
//             cout<<"You got Distinction! Bravo!"<<endl;
//             break;

//         case Pass:
//             cout<<"Yay! You Passed"<<endl;
//             break;

//         case Fail:
//             cout<<"Sorry Better luck next time! \nDon't you dare give up! "<<endl;
//     }

// return 0;
// }


// Unions-----------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// union payment{
//     int hourlypay;
//     int monthlypay;
// };

// int main(){
//     enum paytype{hourly=1,monthly};
//     int hr=7,hours;
//     int mr=90000;
//     paytype total;
//     payment m1;
//     int choice;
//     cout<<"------------------------------Payroll System----------------------------------\n";
//     cout<<"Choose Payment System: "<<endl;
//     cout<<"1. Hourly \n2.Monthly\n";
//     cout<<"Enter your choice: \n";
//     cin>>choice;
//     if(choice==1){
//         total=hourly;
//         cout<<"Enter the no. of hours worked on a daily basis: "<<endl;
//         cin>>hours;
//         m1.hourlypay=hours*hr;
//     }
//     else if(choice==2){
//         total=monthly;
//         m1.monthlypay=mr;
        
//     }
//     else{
//         cout<<"Wrong input!"<<endl;
//     }

//     switch(total){
//         case hourly:
//             cout<<"Payment Type Hourly! "<<endl;
//             cout<<"Your Salary per day is: "<<m1.hourlypay<<"$"<<endl;
//             break;
//         case monthly:
//             cout<<"Your Salary per month is fixed $"<<m1.monthlypay<<endl;
//             break;
//     }

// return 0;
// }
// -----------------------------------------------------------------------------------------------------------------------------//
// Scenario-2
// #include<iostream>
// using namespace std;

// union vehicle{
//     int carhp;
//     int bikecc;
//     int busseats;
// };

// int main(){
//     enum vehicletype{car=1,bike,bus};
//     int choice;
//     int hp=1000,cc=1000,seats=20;
//     vehicle v1;
//     vehicletype x;
//     cout<<"----------------------Welcome to One8 Travels---------------------------------"<<endl;
//     cout<<"1.Car \n2.Bike \n3.Bus\n";
//     cout<<"Enter your choice: ";
//     cin>>choice;
//     x = static_cast<vehicletype>(choice);

//     if(choice==1){
//         cout<<"4 seats!"<<endl;
//         v1.carhp=hp;
//     }
//     else if(choice==2){
//         cout<<"2 seats!"<<endl;
//         v1.bikecc=cc;
//     }
//     else if(choice==3){
//         cout<<"20 seats!"<<endl;
//         v1.busseats=seats;
//     }
//     else{
//         cout<<"Wrong input!";
//     }

//     switch (x)
//     {
//     case car:
//         cout<<"You chose car with "<<v1.carhp<<"hp";
//         break;
//     case bike:
//         cout<<"You chose bike with "<<v1.bikecc<<"cc";
//         break;
//     case bus:
//         cout<<"You chose bus with "<<v1.busseats<<"seats";
//         break;
//     default:
//         break;
//     }
// return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------//
// Scenario-3
// #include<iostream>
// #include<cstring> // for strcpy
// using namespace std;

// union Item {
//     int damage;
//     float speedboost;
//     char itemname[30];
// };

// int main() {
//     enum Inventory { DAMAGE = 1, SPEED, ITEM };
//     Inventory iv;
//     Item i;
//     int choice;

//     cout << "---------------------------GAME INVENTORY OPTIMIZATION---------------------------\n";
//     cout << "Select your option: \n";
//     cout << "1. DAMAGE \n2. SPEED BOOST \n3. ITEM NAME\n";
//     cout << "---------------------------------------------------------------------------------\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     iv = static_cast<Inventory>(choice);

//     switch (iv) {
//         case DAMAGE:
//             cout << "You chose DAMAGE.\n";
//             i.damage = 120;
//             cout << "Your current health damage is: " << i.damage << " HP\n";
//             break;

//         case SPEED:
//             cout << "You chose SPEED BOOST.\n";
//             i.speedboost = 15.5f;
//             cout << "Your speed increased to: " << i.speedboost << "x\n";
//             break;

//         case ITEM:
//             cout << "You chose ITEM NAME.\n";
//             strcpy(i.itemname, "Golden Sword");
//             cout << "You found: " << i.itemname << "!\n";
//             break;

//         default:
//             cout << "Invalid choice!\n";
//             break;
//     }

//     return 0;
// }



// Day-2 Continuation-----------------------------------------------------------------------------------------------------------
// Scenario-1
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Flow state on!";
// return 0;
// }

// Enums and Unions continuation--------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// union devicedata{
//     int brightness;
//     float speed;
//     float temperature;
// };

// int main(){
//     enum Devicetype{Light=1,Fan,Thermostat};
//     devicedata d1;
//     Devicetype lft;
//     int n;
//     char yn;
//     cout<<"-------------------------------------Smart Device Controller-------------------------------------\n"<<endl;
//     do{
//         cout<<"Devices Connected: "<<endl;
//     cout<<"1.Light \n2.Fan \n3.Thermostat\n";
//     cout<<"Enter your choice: ";
//     cin>>n;
//     lft= static_cast<Devicetype>(n);

//     if(n==1){
//         cout<<"You selected Light..."<<endl;
//         cout<<"Set the brightness level(0-100): ";
//         cin>>d1.brightness;
//     }
//     else if(n==2){
//         cout<<"You selected Fan..."<<endl;
//         cout<<"Set the fan speed level(0-5): ";
//         cin>>d1.speed;
//     }
//     else if(n==3){
//         cout<<"You selected Thermostat..."<<endl;
//         cout<<"Set the Thermostat temperature level: ";
//         cin>>d1.temperature;
//     }
//     else{
//         cout<<"Invalid choice!";
//     }

//     switch (lft){
//         case Light:
//             cout<<"Your Light is set at Level: "<<d1.brightness<<endl;
//             break;

//         case Fan:
//             cout<<"Your Fan is set at Speed: "<<d1.speed<<endl;
//             break;
        
//         case Thermostat:
//             cout<<"Your Thermostat is set at the temperature: "<<d1.temperature<<endl;
//             break;

//         default:
//             cout<<"Invalid Choice! "<<endl;
//     }

//     cout<<"Do you want to change anything else?(y/n): ";
//     cin>>yn;

//     }while(yn=='y'||yn=='Y');
// return 0;
// }

// Scenario-2
// #include<iostream>
// using namespace std;

// union transaction {
//     float amount;
//     char chequeno[20];
//     char upiid[30];
// };

// int main() {
//     int total = 1000000;
//     enum transactiontype { Cash = 1, Cheque, UPI };
//     transaction t;
//     transactiontype tt;
//     float transac = 20000;
//     float che = 500000;
//     float wd;
//     int n;
//     char yn;
//     cout << "-----------------------Bank Account Record System-----------------------\n";
//     do{
//         cout << "1. Cash \n2. Cheque \n3. UPI\n";
//         cout << "Select your Transaction Type: ";
//         cin >> n;

//         tt = static_cast<transactiontype>(n);

//         switch (tt) {
//             case Cash:
//                 cout << "You selected Cash.\nYour daily cash limit is Rs 20000.\n";
//                 cout << "Enter amount to withdraw: ";
//                 cin >> wd;
//                 if (wd <= 20000) {
//                     total -= wd;
//                     cout << " Amount withdrawn: Rs." << wd << endl;
//                     cout << "Remaining balance: Rs." << total << endl;
//                 } else {
//                     cout << " Exceeded daily limit!" << endl;
//                 }
//                 break;

//             case Cheque:
//                 cout << "You selected Cheque.\nEnter Cheque No.: ";
//                 cin >> t.chequeno;
//                 total -= che;
//                 cout << "Cheque Processed!\n";
//                 cout << "Cheque No.: " << t.chequeno << endl;
//                 cout << "Amount debited: Rs." << che << endl;
//                 cout << "Remaining balance: Rs." << total << endl;
//                 break;

//             case UPI:
//                 cout << "You selected UPI.\nEnter UPI ID: ";
//                 cin >> t.upiid;
//                 total -= transac;
//                 cout << " UPI Payment Successful!\n";
//                 cout << "UPI ID: " << t.upiid << endl;
//                 cout << "Amount debited: Rs." << transac << endl;
//                 cout << "Remaining balance: Rs." << total << endl;
//                 break;

//             default:
//                 cout << "Invalid choice!" << endl;
//         }
//         cout<<"Do you want to check again?(y/n)";
//         cin>>yn;
//     }while(yn=='y'||yn=='Y');
//     return 0;
// }
