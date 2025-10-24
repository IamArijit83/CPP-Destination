// Day-1
// Basic Structure test.................................
// #include<iostream>
// using namespace std;
// /*
// This is
// a 
// multi line
// Comment*/
// int main(){
//     int a=44;
//     cout<<"Arijit is the Absolute best!\nSimply Lovely!"<<a<<sizeof(a);
//     return 0;
// }


//multi variable test............................................................................
// #include<iostream>
// using namespace std;

// int main(){
//     // int a=7;
//     // int b=9;
//     int a=7,b=9;
//     float pi=3.14;
//     double p=3.41;
//     char c='x';
//     bool is_true=true;
//     cout<<"Its Hammertime! \n The value of a is: "<<a<<" The value of b is: "<<b<<"The Value Of pi is: "<<pi<<"\nThe value of p is: "<<p<<"\nThe Value of istrue is: "<<is_true;
//     cout<<"\nThe sizes of different variables: "<<sizeof(a)<<" "<<sizeof(pi)<<" "<<sizeof(p)<<" "<<sizeof(c)<<" "<<sizeof(is_true);     
//     return 0;
// }


//Global Variable test..................................
// #include<iostream>
// using namespace std;
// int global=7;
// void simply(){
//     cout<<"inside function"<<global;
// }
// int main(){
//     cout<<"Just a simply lovely! function test!\n";
//     simply();
//     return 0;
// }


//Local and Global Variable Same name test............................................................
// #include<iostream>
// using namespace std;
// int globe=33;                              //Global Variable
// void merc(){
//     cout<<"Its Hammertime!\n";
// }

// int main(){
//     int globe=44;                               //Local Variable
//     cout<<"Simply Lovely!\n";          
//     merc();
//     cout<<globe;                                //The local variable ill get the higher preceedence
//     return 0;
// }


// Input test.......................................................
// #include<iostream>
// using namespace std;

// int main(){
//     int num1, num2;
//     cout<<"Enter the value of Num1: "; //<<--Insertion Operator
//     cin>>num1;                          //>>--Extraction Operator
//     cout<<"Enter the value of Num2: "; //<<--Insertion Operator
//     cin>>num2;                          //>>--Extraction Operator
//     cout<<"The sum of Num1 and Num2 is: "<<num1+num2;
//     return 0;
// }


//Creating a header file test.......................................
// #include<iostream>
// #include "this.h"
// using namespace std;
// int main(){
//     cout<<"Header Test";
//     return 0;
// }


//Operators test.....................................................
// #include<iostream>
// using namespace std;
// int main(){
//     int a=8;
//     int b=2;
//     cout<<"Welcome to Smooth Operatorsssss...................."<<endl;
//     cout<<"Different arithmatic operators:"<<endl;
//     cout<<"a+b: "<<a+b<<endl;
//     cout<<"a-b: "<<a-b<<endl;
//     cout<<"a*b: "<<a*b<<endl;
//     cout<<"a/b: "<<a/b<<endl;
//     cout<<"a%b: "<<a%b<<endl;

//     cout<<"Different Increment operators: "<<endl;
//     cout<<"a++: "<<a++<<endl;
//     cout<<"a--: "<<a--<<endl;
//     cout<<"++a: "<<++a<<endl;
//     cout<<"--a: "<<--a<<endl;
    
//     cout<<"Different Assignment operators: "<<endl;
//     int c=9,d=3;
//     char e='e';
//     cout<<c<<" "<<d<<" "<<e<<endl;
//     cout<<"Different Comparison operators: "<<endl;
//     cout<<"a==b: "<<(a==b)<<endl;
//     cout<<"a>b: "<<(a>b)<<endl;
//     cout<<"a<b: "<<(a<b)<<endl;
//     cout<<"a<=b: "<<(a<=b)<<endl;
//     cout<<"a>=b: "<<(a>=b)<<endl;
//     cout<<"a!=b: "<<(a!=b)<<endl;

//     int age=23;
//     cout<<"Different Logical operators: "<<endl;
//     cout<<"age>18 && age <50: "<<(age>18 && age <50)<<endl;
//     cout<<"age<18 || age>50: "<<(age<18 || age>50)<<endl;
//         return 0;
// }


//Scope resolution operator test.....................................................
// #include <iostream>
// using namespace std;
// int c=44;
// int main(){
//     int a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of a: ";
//     cin>>b;
//     c=a+b;
//     cout<<"The sum of a and b is: "<<c<<endl;
//     cout<<"The scope resolution operator for accessing the global variables: "<<::c<<endl;
//     return 0;
// }


//Built in data types Literals test...................................................
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// int main(){
//     float d=34.34;
//     double e=23.34;
//     float f=89.8f;
//     cout<<d<<" "<<typeid(d).name()<<" "<<sizeof(d)<<endl;
//     cout<<e<<" "<<typeid(e).name()<<" "<<sizeof(d)<<endl;
//     cout<<f<<" "<<typeid(f).name()<<" "<<sizeof(d)<<endl;
// }


// Reference Variables test.................................................................
// #include<iostream>
// using namespace std;

// int main(){
//     float x=799;
//     float &y=x;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<y<<endl;
//     cout<<&y<<endl;
//     return 0;
// }


//Typecasting test...................................................................................
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// int main(){
//     int a=46;
//     float b=44.33;
//     cout<<"The value of a is: "<<(float)a<<endl;
//     cout<<"The value of b is: "<<(float)b<<endl;
//     cout<<"The Type of a is: "<<typeid(a).name()<<endl;
//     cout<<"The Type of a is: "<<typeid(b).name()<<endl;
//     cout<<"a+b: "<<(a+b)<<endl;
//     cout<<"a+int(b): "<<(a+int(b))<<endl;
//     cout<<"a+(int)b: "<<(a+(int)b)<<endl;
//     return 0;
// }



//const test................................................
// //Variables changes............
// #include<iostream>
// using namespace std;
// int main(){
//     // int a=33;
//     // cout<<"The value of a was: "<<a<<endl;
//     // a=44;
//     // cout<<"Now the value of a is: "<<a;

// //Constants..............................
//     const int a=83;
//     cout<<"The value of a was: "<<a<<endl;
//     a=44;
//     cout<<"Now the value of a is: "<<a;
//     return 0;
// }


//Manipulators...............................................
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     //setw----sets field width
//     int a=83,b=444,c=3333;
//     cout<<"Without setw: "<<a<<endl;
//     cout<<"Without setw: "<<b<<endl;
//     cout<<"Without setw: "<<c<<endl;

//     cout<<"With setw: "<<setw(4)<<a<<endl;
//     cout<<"With setw: "<<setw(4)<<b<<endl;
//     cout<<"With setw: "<<setw(4)<<c<<endl;
// }


//Operator Preceedence test......................................
// #include<iostream>
// using namespace std;
// int main(){
//     int a=33,b=44;
//     // int c=(a*5)+b;
//     int c=((((a*5)+b)-45)+87);
//     cout<<c<<endl;
//     return 0;
// }


// Control Structures test...............................................
//Sequence Structures-----multiple actions in a squential way
//Selection Structures----actions based on if-else decision
//Loop Structures---------looping till a given range

//Sequence Structure...............................................
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age....: ";
//     cin>>age;
//     if(age<18 || age>45){
//         cout<<"You are ineligible for F1 license....."<<endl;
//     }
//     else if(age>=18 || age<=45){
//         cout<<"You are eligible for F1 license....."<<endl;
//     }
//     else{
//         cout<<"Just Keep Watchin!...."<<endl;
//     }
//     return 0;
// }


// Selection Structure.............................................
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter age: ";
//     cin>>age;
//     switch(age){
//         case 18:
//             cout<<"You are 18";
//             break;
//         case 22:
//             cout<<"You are 22";
//             break;
//         case 2:
//             cout<<"You are 2";
//             break;
// // If break is not there then all the cases will be printed unnecessarily
//         default:
//             cout<<"No Special Cases"<<endl;
//             break;
//     }
// }


// Loop Structure......................................................
// For Loop
// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=1;1<=40;i++){   //Infinite for loop
//     for(int i=1;i<=100;i++){
//         cout<<i<<" ";
//         cout<<i<<endl;
//     }
//     return 0;
// }

//While Loop
// #include<iostream>
// using namespace std;
// int main(){
//     int i=10;
//     // while (true){           //Infinite Loop
//     while (i<=40){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }


//Do-While Loop
// #include<iostream>
// using namespace std;
// int main(){
//     // int i=1;
//     // do{
//     //     cout<<i<<endl;
//     //     i++;
//     // }while(i<=40);
//     int tab;
//     int i=1;
//     cout<<"Enter a number: ";
//     cin>>tab;
//     do{
//         cout<<tab*i<<endl;
//         i++;
//     }while(i<=10);
//     return 0;
// }


//Break and Continue test............................
// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=1;i<5;i++){
//     //     cout<<i<<endl;
//     //     if(i==2){
//     //         break;               //Stops the iteration as soon as the condition is fulfilled
//     //     }
//     // }
//     for(int i=1;i<5;i++){
//         if(i==2){
//             continue;               //Skips the condition and accesses all other elements
//         }
//         cout<<i<<endl;              
//     }
// return 0;
// }