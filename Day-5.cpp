// Day-5
// Inheritance-------------------------------------------------------------------
//Multiple
//Multi level
//Hierarchy
//Hybrid = Multiple+multiplevel


// #include<iostream>
// using namespace std;

// class Employee{
    
//     public:
//         int id; 
//         float salary;
//         Employee(int x){
//             id=x;
//             salary=65;
//         }
//         Employee(){}
// };

// // class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}

// class programmer:Employee{
//     public:
//         int lang=0;
//         programmer(int y){
//             int id=y;
//         }
//         void getdata(){
//             cout<<id<<endl;
//         }

// };

// int main(){
//         Employee arx(1),zrv(2);
//         cout<<arx.salary<<endl;
//         cout<<zrv.salary<<endl;
//         programmer god(10);
//         cout<<god.lang<<endl;
//         god.getdata();
//     return 0;
// }



// Single Inheritance test----------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class base {
//     int data1;       // private (accessible only inside base)
// public:
//     int data2;       // public
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void base::setdata(void) {
//     data1 = 44;
//     data2 = 33;
// }

// int base::getdata1() {
//     return data1;
// }

// int base::getdata2() {
//     return data2;
// }

// class derived : public base {   //public inheritance
//     int data3;
// public:
//     void process();
//     void display();
// };

// void derived::process() {
//     data3 = data2 * getdata1();
// }

// void derived::display() {
//     cout << "The value of data1 is " << getdata1() << endl;
//     cout << "The value of data2 is " << data2 << endl;
//     cout << "The value of data3 is " << data3 << endl;
// }

// int main() {
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();
//     return 0;
// }



// Protected access modifier test--------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// class base{
//     protected:
//         int a;
//     private:
//         int b;
// };
// /*
//         Members                             Public Derivation       Private Derivation          Protected Derivation
//        1.Private members                    Not Inherited           Not Inherited               Not Inherited
//        2.Protected members                  Protected               Private                     Protected
//        3.Public members                     Public                  Private                     Protected
// */
// class derived::protected base{



// }

// int main(){
//     base b;
//     derived d;
//     // cout<<b.a;                  //will not work since a is protected in both base as well as derived class
// return 0;
// }


// Multi-level Inheritance test---------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// // Base class
// class student {
// protected:
//     int roll;
// public:
//     void set_roll(int r);
//     void get_roll(void);
// };

// void student::set_roll(int r) {
//     roll = r;
// }

// void student::get_roll() {
//     cout << "The roll number is: " << roll << endl;
// }

// // Derived class from student
// class exam : public student {
// protected:
//     float maths;
//     float physics;
// public:
//     void set_marks(float m1, float m2);
//     void get_marks(void);
// };

// void exam::set_marks(float m1, float m2) {
//     maths = m1;
//     physics = m2;
// }

// void exam::get_marks() {
//     cout << "Marks obtained in Maths: " << maths << endl;
//     cout << "Marks obtained in Physics: " << physics << endl;
// }

// // Derived class from exam
// class result : public exam {
//     float percentage;
// public:
//     void display();
// };

// void result::display() {
//     get_roll();
//     get_marks();
//     cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
// }

// int main() {
//     result arx;
//     arx.set_roll(83);
//     arx.set_marks(99, 98);
//     arx.display();
//     return 0;
// }


// Multiple Inheritance test------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// // class derived c:visibilty-mode base1, visibility-mode base2{
// // class body of class "derived c" 
// // }

// class base1{
//     protected:
//         int base1;
//     public:
//         void set_base1(int a){
//             base1=a;
//         }
// };

// class base2{
//     protected:
//         int base2;
//     public:
//         void set_base2(int a){
//             base2=a;
//         }
// };

// class derived: public base1, public base2{
//     public:
//         void show(){
//             cout<<"The value of Base1 is: "<<base1<<endl;
//             cout<<"The value of Base2 is: "<<base2<<endl;
//             cout<<"The value of sum of Base1 and Base2 is: "<<base1+base2<<endl;
//         }
// };


// int main(){
//     derived arx;
//     arx.set_base1(44);
//     arx.set_base2(33);
//     arx.show();
// return 0;
// }


// Practice test----------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <cmath>
// using namespace std;

// class simplecalculator {
// protected:
//     int a, b;
// public:
//     void setdata_simple(int x, int y) {
//         a = x;
//         b = y;
//     }
//     void displaysimplecalculator() {
//         cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
//         cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
//         cout << "The product of " << a << " and " << b << " is " << a * b << endl;
//         cout << "The division of " << a << " and " << b << " is " << (float)a / b << endl;
//     }
// };

// class scientificcalculator {
// protected:
//     int a, b;
// public: 
//     void setdata_scientific(int x, int y) {
//         a = x;
//         b = y;
//     }
//     void displayscientificcalculator() {
//         cout << "The value of Sin(" << a << "+" << b << ") is: " << sin(a + b) << endl;
//         cout << "The value of Cos(" << a << "+" << b << ") is: " << cos(a + b) << endl;
//         cout << "The value of Tan(" << a << "+" << b << ") is: " << tan(a + b) << endl;
//         cout << "The value of " << a << "^" << b << " is: " << pow(a, b) << endl;
//     }
// };

// class hybridcalculator : public simplecalculator, public scientificcalculator {
// public:

//     void setdata(int x, int y) {
//         setdata_simple(x, y);
//         setdata_scientific(x, y);
//     }

//     void display() {
//         cout << "\n--- Simple Calculator ---" << endl;
//         displaysimplecalculator();

//         cout << "\n--- Scientific Calculator ---" << endl;
//         displayscientificcalculator();
//     }
// };

// int main() {
//     int x, y;
//     cout << "Enter your first number: ";
//     cin >> x;
//     cout << "Enter your second number: ";
//     cin >> y;

//     hybridcalculator arx;  
//     arx.setdata(x, y);     
//     arx.display();         

//     return 0;
// }


// Ambiguity Resolution in Inheritance-----------------------------------------------------------------
// if there are multiple classes and with the same function so the derived class would not understand which function to run,
// so that ambiguity or problem must be solved!
// Ambiguity 1 example------------------------------------------------------------
// #include<iostream>
// using namespace std;

// class base1{
//     public:
//         void greet(){
//             cout<<"How are you? "<<endl;
//         }
        
// };

// class base2{
//     public:
//         void greet(){
//             cout<<"Comment ca va? "<<endl;
//     }
// };

// class derived:public base1, public base2{
//     int a;
//     public:
//         void greet(){
//             base1::greet();
//         }
// };

// int main(){
//     base1 obj1;
//     base2 obj2;
//     obj1.greet();
//     obj2.greet();
//     derived der;
//     der.greet();
// return 0;
// }

// Ambiguity 2 example---------------------------------------------------------------------------------------
// If there is nothing in the derived class then it will derive from the base class when called.Self ambiguity resolution
// #include<iostream>
// using namespace std;

// class base1{
//     public:
//         void greet(){
//             cout<<"How are you? "<<endl;
//         }
        
// };

// class base2{
//     public:
//         void greet(){
//             cout<<"Comment ca va? "<<endl;
//     }
// };

// class derived:public base1, public base2{
//     int a;
//     public:
//         void greet(){
//             base1::greet();
//         }
// };


// class b{
//     public:
//         void say(){
//             cout<<"You know what that is Simple Lovely!"<<endl;
//         }
// };

// class d:public b{
//     public:
//         void say(){
//             cout<<"Its Hammertime!"<<endl;
//         }
// };


// int main(){
//     base1 obj1;
//     base2 obj2;
//     obj1.greet();
//     obj2.greet();
//     derived der;
//     der.greet();
//     b B;
//     B.say();
//     d D;
//     D.say();
// return 0;
// }


// Virtual Base Class-----------------------------------------------------------------------------------------------------------
// example- 1 base class, 2 inherited class and 1 inherited from those 2 inherited class 
// while inheriting if there is a common variable that was inherited then there would be ambiguity while using that in the single derived class
// so to solve that we use virtual base class


// #include<iostream>
// using namespace std;

// class student{
//     protected:
//         int roll;
//     public:
//         void set_roll(int a){
//             roll=a;
//         }
//         void print_number(void){
//             cout<<"your roll no. is: "<<roll<<endl;
//         }
// };

// class test:virtual public student{
//     protected:
//         float maths,physics;
//         public:
//             void set_marks(float m1,float m2){
//                 maths=m1;
//                 physics=m2;
//             }
//             void print_marks(void){
//                 cout<<"Your Result: "<<endl
//                 <<"Maths: "<<maths<<endl
//                 <<"Physics: "<<physics<<endl;
//             }
// };

// class sports:virtual public student{
//     protected:
//         float score;
//     public:
//         void set_score(float sc){
//             score=sc;
//         }
//         void print_score(){
//             cout<<"Your Physical education score is: "<<score<<endl;
//         }
// };

// class result:public test,public sports{
//     private: 
//         float total;
//     public:
//         void display(){
//             total=maths+physics+score;
//             print_number();
//             print_marks();
//             print_score();
//             cout<<"Your total score is: "<<total<<endl;
//         }
// };

// int main(){
//     result arx;
//     arx.set_roll(83);
//     arx.set_marks(99.9,98.9);
//     arx.set_score(99);
//     arx.display();
// return 0;
// }


