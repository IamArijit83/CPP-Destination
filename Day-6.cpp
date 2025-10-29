// Day-6
// Constructors in Derived Classes
// The base class constructor is always called first
// In case of Multiple inheritance if there are two parent classes then the constructor of the class which is defined first will be executed first
// Multilevel is according to the order of inheritance
// If there is a virtual base class called then they are invoked before the non-virtual base classes
// If there are a multiple virtual base classes then they are invoked according to their order as declared
// Any non virtual base class are then constructed before the derived constructor is executed

// #include<iostream>
// using namespace std;

// class base{
//     int data;
//     public:
//         base(int i){
//             data=i;
//             cout<<"Base class constructor called"<<endl;
//         }
//         void printdatab1(void){
//             cout<<"The value of data is "<<data<<endl;
//         }
// };


// class base2{
//     int data2;
//     public:
//         base2(int i){
//             data2=i;
//             cout<<"Base2 class constructor called"<<endl;
//         }
//         void printdatab2(void){
//             cout<<"The value of data2 is "<<data2<<endl;
//         }
// };

// class derived:public base,public base2{                             //Changing the order of the base classes will affect the execution
//     int derived1,derived2;
//     public:
//         derived(int a,int b, int c, int d):base(a),base2(b){        //Changing the order here will not make any difference
//             derived1=c;
//             derived2=d;
//             cout<<"Derived class constructor called"<<endl;
//         }
//         void printdatad(void){
//             cout<<"The value of derived1 is "<<derived1<<" and derived2 is "<<derived2<<endl;
//         }
// };

// int main(){
//     derived der(1,2,3,4);
//     der.printdatab1();
//     der.printdatab2();
//     der.printdatad();
// return 0;
// }


// Initialization list in constructors
// #include<iostream>
// using namespace std;

// /*
// The value that is declared first is initialized first
// */

// class test{
//     int a,b;
//     public:
//         test(int i,int j):a(i),b(j){            //list initialization
//         // test(int i,int j):a(i),b(i+j){
//         // test(int i,int j):a(i),b(2*j){
//         // test(int i,int j):a(i),b(a+j){
//         // test(int i,int j):a(i){
//         //     b=j;
//             cout<<"The constructor is executed"<<endl;
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//         }
// };

// int main(){
//     test t(44,33);
// return 0;
// }



// New and Delete Keywords-pointers

// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int* p=&a;
//     *p=6;

//     cout<<"The value of a is "<<*(p)<<endl;     //Dereferencing
//     cout<<"The value of a is "<<*p<<endl;       //Dereferncing
//     cout<<"The value of a is "<<a<<endl;        //Actual value of a
//     cout<<"The value of a is "<<&a<<endl;       //Address of a
//     cout<<"The value of a is "<<&p<<endl;       //Address of p
//     // cout<<"The value of a is "<<*a<<endl;    //Invalid
//     // new operator/new keyword
//     int *ptr= new int(33);
//     cout<<"The value at address ptr is "<<*(ptr)<<endl;


//     int *arr=new int[3];
//     arr[0]=33;
//     // *(arr+1)=20;                  //------value of address+1
//     arr[1]=44;
//     arr[2]=16;
//     // delete arr;
//     // delete [] arr;  //Dynamically allocated array is freed
//     cout<<"The value of arr[0] is "<<arr[0]<<endl;
//     cout<<"The value of arr[1] is "<<arr[1]<<endl;
//     cout<<"The value of arr[2] is "<<arr[2]<<endl;

// return 0;
// }


// pointers to objects----------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// class complex{
//     int real,imaginary;
//     public:
//         void getdata(){
//             cout<<"The real part is: "<<real<<endl;
//             cout<<"The imaginary part is: "<<imaginary<<endl;
//         }
//         void setdata(int a,int b){
//             real=a;
//             imaginary=b;
//         }
// };

// int main(){
//     complex c;              //Normal
//     // c.setdata(33,44);    //Normal
//     // c.getdata();         //Normal
//     // complex *(ptr)=&c;                  //Accessing the public members of object using pointers
//     complex *ptr=new complex;               //new creates a new object
//     // (*ptr).setdata(33,44);                  
//     // (*ptr).getdata();                       
//     ptr->setdata(44,33);
//     ptr->getdata();


//     complex *ptr1=new complex[4];           //Array of 4 objects
//     ptr1->setdata(17,22);
//     ptr1->getdata();

// return 0;
// }



// Array of objects using pointers------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// class shop {
//     int id;
//     float price;
// public:
//     void setdata(int a, float b) {
//         id = a;
//         price = b;
//     }
//     void getdata(void) {
//         cout << "The item id is: " << id << endl;
//         cout << "The price of the item is: " << price << endl;
//     }
// };

// int main() {
//     int size = 3;   // You can change this value
//     int p, i, j;
//     float q;

//     shop *ptr = new shop[size];   // Dynamically create array of shop objects
//     shop *ptr_temp = ptr;         // Save starting address

//     // Input loop
//     for (i = 0; i < size; i++) {
//         cout << "Enter the id and price of item " << i + 1 << ": ";
//         cin >> p >> q;
//         ptr->setdata(p, q);
//         ptr++;  // Move to next shop object
//     }

//     // Reset pointer back to start
//     ptr = ptr_temp;

//     // Output loop
//     for (j = 0; j < size; j++) {
//         cout << "\nItem number: " << j + 1 << endl;
//         ptr->getdata();
//         ptr++;  // Move to next object
//     }

//     // Free memory
//     delete[] ptr_temp;

//     return 0;
// }



// this keyword or this pointer----------------------------------------------------------------------------------------
// If we take the actual and the formal parameter same then it might return us some garbage value,
// So we use this keyword to invoke the member function
// #include<iostream>
// using namespace std;

// class A{
//     int a;
//     public:
//         // A& setdata(int a){
//         void setdata(int a){
//             this->a=a;                                      //this is a pointer which points to the object which is being created
//             // return *this;    
//         }
//         void getdata(){
//             cout<<"The value of a is: "<<a<<endl;
//         }
// };

// int main(){
//     A a;
//     a.setdata(33);
//     a.getdata();
// return 0;
// }


// Polymorphism----------------------------------------------------------------------------------------------------------
// Types- 
// Compile Time Polymorphism-------The decision is taken at the time of compiling that which function is going to be run
// It is achieved by function overloading and operator overloading
// Also called Early Binding 
// Examplke one function is having two parameters and another function is having three parameters. So according to the input it will bind the appropraite function based upon it.
// Runtime Polymorphism------------Takes decision after running that which would run which function in the program
// It is achieved by virtual functions
// It does not does binding. It takes decision based upon the pointer type

// Pointers to derived classes----------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// class baseclass{
//     public:
//         int var_base;
//         void display(){
//             cout<<"Displaying base class variable var_base "<<var_base<<endl;
//         }
// };

// class derivedclass:public baseclass{
//     public:
//         int var_der;
//         void display(){
//             cout<<"Displaying base class variable var_base "<<var_base<<endl;
//             cout<<"Displaying base class variable var_base "<<var_der<<endl;
//         }
// };

// int main(){
//     baseclass* base_ptr;
//     baseclass obj1;
//     derivedclass objder;        //The base class pointer is permitted to get pointed by derived class object
//     base_ptr=&objder;           //Pointing base class pointer to derived class


//     base_ptr->var_base=33;
//     base_ptr->display();            
//     // base_ptr->var_der=44;   -----will throw error

//     derivedclass* der_ptr;
//     der_ptr=&objder;
//     der_ptr->var_base=16;
//     der_ptr->var_der=44;
//     der_ptr->display();
// return 0;
// }


// Virtual Functions------------------------------------------------------------------------------------------------------
// pointing derived class through base class is possible but only base class values are accessible
// If made virtual that function/method then we can access the derived class values----achieves runtime polymorphism
// #include<iostream>
// using namespace std;


// class baseclass{
//         public:
//             int var_base=1;
//             virtual void display(){
//                 cout<<"1.Displaying base class variable var_base "<<var_base<<endl;
//             }
// };
    
//     class derivedclass:public baseclass{
//         public:
//             int var_der=2;
//             void display(){
//                 cout<<"2.Displaying base class variable var_base "<<var_base<<endl;
//                 cout<<"2.Displaying base class variable var_base "<<var_der<<endl;
//             }
// };


// int main(){
//     baseclass* base_ptr;
//     baseclass obj_base;
//     derivedclass obj_der;


//     base_ptr=&obj_der;
//     base_ptr->display();
// return 0;
// }

// Another ex------------------------------------------------------------------------------------------
// #include <iostream>
// #include <string>
// using namespace std;

// class smartphone {
// protected:
//     string type;
//     float rating;

// public:
//     smartphone(string s, float r) {
//         type = s;
//         rating = r;
//     }
//     virtual void display() {} // virtual function
// };

// class smartphonechar : public smartphone {
//     float sales;

// public:
//     smartphonechar(string s, float r, float sl) : smartphone(s, r) {
//         sales = sl;
//     }

//     void display() {
//         cout << "The type " << type << " is amazing." << endl;
//         cout << "Ratings: " << rating << " out of 5 stars..." << endl;
//         cout << "Sales: Rs " << sales << endl;
//     }
// };

// class smartphonewords : public smartphone {
//     int words;

// public:
//     smartphonewords(string s, float r, int wc) : smartphone(s, r) {
//         words = wc;
//     }

//     void display() {
//         cout << "The type " << type << " is simply lovely!" << endl;
//         cout << "Ratings are: " << rating << " out of 5..." << endl;
//         cout << "No. of words: " << words << " words" << endl;
//     }
// };

// int main() {
//     string type;
//     float rating, sales;
//     int words;

//     type = "Android";
//     rating = 4.85;
//     sales = 1236.23;

//     smartphonechar andro(type, rating, sales);
//     andro.display();

//     cout << endl;

//     smartphonewords ios("iOS", 4.95, 27);
//     ios.display();

//     return 0;
// }
// // virtual functions can be a friend of another class