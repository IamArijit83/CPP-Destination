//Day-3
//Object Oriented Programming--------------------------------------------
// Classes-------------------Template of an Object
// Object--------------------Instance of a class
// Abstraction---------------Hiding the working
// Encapsulation-------------stacking multiple workings in a single unit
// Inheritance---------------Inheriting from parents to children
// Polymorphism--------------One in multiple formats
// Dynamic Binding-----------The code which will run is known at the run time
// Message passing-----------Objects communicating with each other by passing messages

// Classes
// #include<iostream>
// using namespace std;

// // class Employee{
// //     private:
// //     int a,b,c;
// //     public:
// //     int d,e;
// //     void setData(int a1,int b1,int c1);
// //     void getData(){
// //         cout<<"The value of a is: "<<a<<endl;
// //         cout<<"The value of b is: "<<b<<endl;
// //         cout<<"The value of c is: "<<c<<endl;
// //         cout<<"The value of d is: "<<d<<endl;
// //         cout<<"The value of e is: "<<e<<endl;
// //     }
// // };

// class animal{
//     private:
//     char a;
//     public:
//     int power,weight;
//     void set(char a1);
//     void get(){
//         cout<<"The value of a is: "<<a<<endl;
//         cout<<"The value of power(in psi) is: "<<power<<endl;
//         cout<<"The value of weight(in kgs) is: "<<weight<<endl;
//     }
// };


// void animal::set(char a1){
//     a=a1;
// }



// // void Employee::setData(int a1,int b1,int c1){
// //     a=a1;
// //     b=b1;
// //     c=c1;
// // }

// int main(){
//     // Employee arx;
//     // arx.d=44;
//     // arx.e=33;                    //without declaring d and e they will give garbage value
//     // // arx.a=1;
//     // // arx.b=16;                 //a,b,c are private so we cannot set it now.
//     // // arc.c=14;
//     // arx.setData(1,8,3);
//     // arx.getData();

//     animal x;
//     x.power=460;
//     x.weight=180;

//     // x.a='T';
//     x.set('T');
//     x.get();
    

// return 0;
// }


//Nesting of Member Functions------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class binary{
//     string s;                  //By default the classes are private
    
// public:
//     void read(void);
//     void bin(void);
//     void ones(void);
//     void display(void);
// };


// void binary::read(void){
//     cout<<"enter a binary number: "<<endl;
//     cin>>s;
// }

// void binary::bin(void){
//     for(int i=0;i< s.length();i++){
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"Incorrect Binary format"<<endl;
//             exit(0);
//         }
//     }
// }

// void binary::ones(void){
//     bin();                                          //nesting
//     for(int i=0;i<s.length();i++){
//         if(s.at(i)=='0'){
//             s.at(i)='1';
//         }

//         else{
//             s.at(i)='0';
//         }

//     }    
// }

// void binary::display(void){
//     cout<<"Displaying the binary number"<<endl;
//     for(int i=0;i<s.length();i++){
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }


// int main(){

//     binary b;
//     b.read();
//     // b.bin();
//     b.display();
//     b.ones();
//     b.display();

// return 0;
// }


//

// #include<iostream>
// using namespace std;

// class shop{
//     int itemid[100];
//     int itemprice[100];
//     int counter;
//     public:
//         void initcounter(void){
//             counter=0;
//         }
//         void setprice(void);
//         void displayprice(void);
// };

// void shop::setprice(void){
//     cout<<"Enter id of your item no. "<<counter+1<<endl;
//     cin>>itemid[counter];
//     cout<<"Enter price of your item: "<<endl;
//     cin>>itemprice[counter];
//     counter++;
// }

// void shop::displayprice(void){
//     for(int i=0;i<counter;i++){
//         cout<<"The price of item with id "<<itemid[i]<<" is: "<<itemprice[i]<<endl;
//     }

// }


// int main(){
//     shop market;
//     market.initcounter();
//     market.setprice();
//     market.setprice();
//     market.setprice();
//     market.displayprice();
// return 0;
// }


//Static variable test.................................................................
//Static Data member-----------------------------------
// #include<iostream>
// using namespace std;

// class Employee{
//     int id;
//     static int count;                           //----------------------------------static data member
//     public:
//         void setdata(void){
//             cout<<"Enter the id"<<endl;
//             cin>>id;
//             count++;
//         }
//         void getdata(void){
//             cout<<"The id of Employee is: "<<id<<" and this is employee number: "<<count<<endl;
//         }

//         static int getcount(void){                                          //Static Function
//             cout<<"The value of count is: "<<count<<endl;                       
//             // cout<<id;                     //This will give error because static functions can call only static variables
//         }

// };

// int Employee::count;                                //it is starting from 0, but if we want to run from a different number
//                                                     //then we can do int Employee::count=1000; 

// int main(){
//     Employee emp,emp2,emp3;
//     // emp.id=1;            //Cannot do this because id and count are private items
//     // emp.count=1;
//     emp.setdata();
//     emp.getdata();
//     Employee::getcount();


//     emp2.setdata();
//     emp2.getdata();
//     Employee::getcount();


//     emp3.setdata();
//     emp3.getdata();
//     Employee::getcount();

// return 0;
// }


//array of objects test...........................................................
// #include<iostream>
// using namespace std;

// class Employee{
//     int id;
//     int salary;
//     public:
//         void setid(void){
//             salary=122;
//             cout<<"Enter the emp id: ";
//             cin>>id;
//         }
//         void getid(void){
//             cout<<"The id of this employee is: "<<id<<endl;
//         }
// };

// int main(){
//     // Employee emp,emp2,emp3,emp4;
//     // emp.setid();
//     // emp.getid();
//     Employee x[4];
//     for(int i=0;i<4;i++){
//         x[i].setid();
//         x[i].getid();
//     }
// return 0;
// }



