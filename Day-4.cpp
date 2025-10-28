// Day-4
//Friends Classes and Member Friend Functions-------------------------------------------------------------------
// Friends Classes test----------------------------------------------------------
// #include<iostream>
// using namespace std;

// class complex;              //Forward Declaration

// class calculator{
//     public:
//         int add(int a, int b){
//             return(a+b);

//         }

//         int sumcomplex(complex ,complex);
//         int sumcompcomplex(complex,complex);
// };

// class complex{
//     int a,b;

//     // friend int calculator::sumcomplex(complex ,complex);
//     // friend int calculator::sumcompcomplex(complex ,complex);    //These are possible for afew functions but not for many


//     //To access the private data of another class we can make a whole class as friend
//     friend class calculator;

//     public:
//         void setnum(int n1,int n2){
//             a=n1;
//             b=n2;
//         }

//         void printnum(){
//             cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
//         }
// };


// int calculator::sumcomplex(complex o1,complex o2){
//     return(o1.a+o2.a);
// }
 
// int calculator::sumcompcomplex(complex o1,complex o2){
//     return(o1.b+o2.b);
// }


// int main(){
//     complex o1,o2;
//     o1.setnum(4,4);
//     o2.setnum(3,3);
//     calculator calc;
//     int res= calc.sumcomplex(o1,o2);
//     cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
//     int img= calc.sumcompcomplex(o1,o2);
//     cout<<"The sum of imaginary part of o1 and o2 is "<<img<<endl;
// return 0;
// }




//simple example of friend function
// #include<iostream>
// using namespace std;

// class y;

// class x{
//     int data;
//     public:
//     void setval(int val){
//         data=val;
//     }
//     friend void add(x,y);
// };

// class y{
//     int num;
//     public:
//     void setval(int val){
//        num=val;
//     }
//     friend void add(x,y);
// };

// void add(x o1,y o2){
//     cout<<"Summing the objects of x and y objects gives: "<<o1.data + o2.num;
// }

// int main(){
//     x a1;
//     a1.setval(44);

//     y b1;
//     b1.setval(33);

//     add(a1,b1);
// return 0;
// }


//A simple complex example-----------------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class c2;

// class c1{
//     int val;
//     friend void exchange(c1 &,c2 &);           //If we dont give & then it would just become a copy, so no exchange would take place
//     public:
//         void indata(int a){
//             val=a;
//         }

//         void display(void){
//             cout<<val<<endl;
//         }
// };

// class c2{
//     int val2;
//     friend void exchange(c1 &,c2 &);        //If we dont give & then it would just become a copy, so no exchange would take place    
//     public:
//         void indata(int a){
//             val2=a;
//         }

//         void display(void){
//             cout<<val2<<endl;
//         }
// };

// void exchange(c1 &x, c2 &y){                //If we dont give & then it would just become a copy, so no exchange would take place
//     int temp=x.val;
//     x.val=y.val2;
//     y.val2=temp;
// }


// int main(){
//     c1 d;
//     c2 e;

//     d.indata(44);
//     e.indata(33);
//     exchange(d,e);

//     cout<<"The value of c1 after exchanging becomes: ";
//     d.display();
//     cout<<"The value of c2 after exchanging becomes: ";
//     e.display();
// return 0;
// }





//Constructors--------------------------------------------------------------------------------
//constructor is a special member function as the same name as the class. 
// It is used to initializa the objects of its class.
// It is automatically invoked whenever the object is created.

// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//         complex(void);
//         void printnum(){
//             cout<<"The numbers are: "<<a<<"+"<<b<<"i"<<endl;
//         }
// };

// complex::complex(void){                          //------this is a default constructor
//     a=33;
//     b=44;
// }

// int main(){
//     complex c;
//     c.printnum();
// return 0;
// }



//It should be decalred in the public section of the class1
// It can have default arguements
// We cannot refer to their address
// We cannot refer to their address


// Parameterized and default constructors
// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//         complex(int,int);

//         void printnum(){
//             cout<<"The numbers are "<<a<<"+"<<b<<"i"<<endl;
//         }
// };

// // complex::complex(void)                       //Default constructor
// complex::complex(int x,int y)                   //parameterized constructor
// {
//     a=x;
//     b=y;
// }


// int main(){
//     // complex a;
//     // a.printnum();

//     // complex a(44,33);           //Implicit call
//     // a.printnum();

//     complex b=complex(44,33);       //Explicit Call
//     b.printnum();

// return 0;
// }


// Parameterized example test----------------------------------------------------
// #include<iostream>
// using namespace std;

// class point{
//     int x,y;
//     public:
//         point(int a,int b){
//             x=a;
//             y=b;
//         }
//         void display(){
//             cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//         }
// };

// int main(){
//     point p(3,6);
//     p.display();
//     point q(44,33);
//     q.display();
// return 0;
// }



//param constructor test
// #include <iostream>
// #include <cmath> 
// using namespace std;

// class point {
// public:
//     int x1, y1, x2, y2;

//     // Parameterized constructor
//     point(int a, int b, int c, int d) {
//         x1 = a;
//         y1 = b;
//         x2 = c;
//         y2 = d;
//     }

//     // friend function declaration
//     friend float pointdist(point p);

//     void display() {
//         cout << "The distance between point A(" << x1 << "," << y1 << ") "
//              << "and point B(" << x2 << "," << y2 << ") is: ";
//     }
// };

// // function definition
// float pointdist(point p) {
//     float dist = sqrt(pow((p.x2 - p.x1), 2) + pow((p.y2 - p.y1), 2));
//     return dist;
// }

// int main() {
//     point p1(1, 2, 3, 34);
//     p1.display();
//     cout << pointdist(p1) << endl;

//     point q1(34, 5, 55, 6);
//     q1.display();
//     cout << pointdist(q1) << endl;

//     return 0;
// }



//Constructor Overloading----------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//         complex(int x,int y){       //parameterized constructor
//             a=x;
//             b=y;
//         }

//         complex(int x){         //parameterized constructor
//             a=x;
//             b=0;
//         }

//         complex(){                  //Default Consructors
//             a=44;
//             b=33;
//         }

//         void display(){
//             cout<<"The numbers are: "<<a<<"+"<<b<<"i"<<endl;
//         }
// };

// int main(){
//     complex c1(4,6);
//     c1.display();

//     complex c2(5);
//     c2.display();

//     complex c3;
//     c3.display();
// return 0;
// }

//Constructors with default arguements test-------------------------------------------------

// #include<iostream>
// using namespace std;

// class simple{
//     int data1,data2;
//     public:
//         simple(int a, int b=1){
//             data1=a;
//             data2=b;
//         }
//         void display();
// };

// void simple::display(){
//     cout<<"The value of data1: "<<data1<<" and "<<data2<<endl; 
// }

// int main(){
//     simple s(33);
//     s.display();
// return 0;
// }


//Dynamic initialization of objects using constructors-------------------------------------
//Which constructor is going to work we dont know and only after running the program and inputting the value we get to know it
// #include <iostream>
// using namespace std;

// class bankdeposit {
//     int principle;
//     int years;
//     float rate;      // make rate float (it can be decimal)
//     float amount;    // store final amount after interest

// public:
//     bankdeposit() {}  // default constructor
//     bankdeposit(int p, int y, float r);  // constructor with float rate
//     bankdeposit(int p, int y, int r);    // constructor with int rate
//     void display();
// };

// // constructor when rate is in float form (e.g., 0.04 for 4%)
// bankdeposit::bankdeposit(int p, int y, float r) {
//     principle = p;
//     years = y;
//     rate = r;

//     amount = principle;
//     for (int i = 0; i < y; i++) {
//         amount = amount * (1 + rate);
//     }
// }

// // constructor when rate is in integer form (e.g., 4 for 4%)
// bankdeposit::bankdeposit(int p, int y, int r) {
//     principle = p;
//     years = y;
//     rate = float(r) / 100;

//     amount = principle;
//     for (int i = 0; i < y; i++) {
//         amount = amount * (1 + rate);
//     }
// }

// void bankdeposit::display() {
//     cout << "Principle amount was: " << principle
//          << ". Return Value after " << years
//          << " years is " << amount << endl;
// }

// int main() {
//     bankdeposit bd1, bd2;

//     int p, y;
//     float r; // for decimal interest rate (e.g. 0.04)
//     int R;   // for percentage rate (e.g. 4)

//     cout << "Enter the value of p, y, and r (as decimal): ";
//     cin >> p >> y >> r;
//     bd1 = bankdeposit(p, y, r);
//     bd1.display();

//     cout << "\nEnter the value of p, y, and R (as integer %): ";
//     cin >> p >> y >> R;
//     bd2 = bankdeposit(p, y, R);
//     bd2.display();

//     return 0;
// }




//Copy constructor test---------------------------------------------------------------
// copy constructor creates a copy of the object
// Normal constructor example-----------------------------------------------------
// #include<iostream>
// using namespace std;

// class number{
//     int a;
//     public:
//         number(){
//             a=0;
//         }
//         number(int num){
//             a=num;
//         }
//         void display(){
//             cout<<"The number for this object is "<<a<<endl;
//         }
// };

// int main(){
//     number x,y,z(45);
//     x.display();
//     y.display();
//     z.display();
// return 0;
// }

//Copy constructor actual implementation test-------------------------------------------------------
// #include<iostream>
// using namespace std;

// class number{
//     int a;
//     public:
//         number(){
//             a=0;
//         }
//         number(int num){
//             a=num;
//         }
//         // When no copy constructors found,compiler supplies its own copy constructor
//         number(number &obj){
//             cout<<"Copy Constructor called"<<endl;
//             a=obj.a;
//         }
//         void display(){
//             cout<<"The number for this object is "<<a<<endl;
//         }
// };

// int main(){
//     number x,y,z(45);
//     x.display();
//     y.display();
//     z.display();
//     number z1(x);
//     z1.display();
// return 0;
// }



//Destructors test------------------------------------------------------------------------------------------------------
// it never takes an arguement nor does it returns any value----------------------------------------------------------
// #include<iostream>
// using namespace std;

// int count=0;
// class num{
//     public:
//         num(){
//             count++;
//             cout<<"This is the time when constructor is called for object number "<<count<<endl;
//         }
//         ~num(){
//             cout<<"This is the time when destructor is called for object number "<<count<<endl;
//             count--;
//         }
// };

// int main(){
//     cout<<"Inside main"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout<<"Entering this block"<<endl;
//         cout<<"Creating two more objects"<<endl;
//         num n2,n3;
//         cout<<"Exiting this block"<<endl;
//     }
//     cout<<"Back to main"<<endl;
// return 0;
// }