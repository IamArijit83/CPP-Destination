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
