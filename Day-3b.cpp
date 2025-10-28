//array of objects

// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;
//     public:
//         void setdata(int v1,int v2){
//             a=v1;
//             b=v2;
//         }

//         void setdatabysum(complex o1,complex o2){
//             a=o1.a+o2.a;
//             b=o1.b+o2.b;
//         }

//         void printnumber(){
//             cout<<"Your complex number is: "<<a<<"+"<<b<<"i "<<endl;
//         }
// };

// int main(){
//     complex c1,c2,c3;
//     c1.setdata(1,2);
//     c1.printnumber();

//     c2.setdata(3,4);
//     c2.printnumber();

//     c3.setdata(5,6);
//     c3.printnumber();

// return 0;
// }



//friends function--------------lets the other non-class functions to access the private class data 
// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//     void setnum(int n1,int n2){
//         a=n1;
//         b=n2;
//     }

//     friend complex sumcomplex(complex o1,complex o2);

//     void printnum(){
//         cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
//     }
// };

// complex sumcomplex(complex o1,complex o2){              //without friend function  we cannot access a and b or the private data of complex class
//     complex o3;                                         //This isnt a part of complex class or it isnt a member function
//     o3.setnum((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }


// int main(){
//     complex x1,x2,sum;
//     x1.setnum(2,4);
//     x2.setnum(5,9);
//     x1.printnum();
//     x2.printnum();

//     sum=sumcomplex(x1,x2);
//     sum.printnum();


// return 0;
// }



//friend classes--------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;


// class complex;

// class calculator{
//     public:
//         int add(int a,int b){
//             return (a+b);
//         }


//         int sumrealcomplex(complex,complex );
// };


// class complex{
//     int a,b;
//     friend int calculator::int sumrealcomplex(complex ,complex );
//     public:
//         void setnum(int n1,int n2){
//             a=n1;
//             b=n2;
//         }
//         void printnum(){
//             cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
//         }
// };

// int calculator::sumrealcomplex(complex o1,complex o2){
//     return (o1.a+o2.a);
// }


// int main(){
//     complex o1,o2;
//     o1.setnum(2,4);
//     o2.setnum(5,7);
//     calculator calc;
//     int res=calc.sumrealcomplex(o1,o2);
//     cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
// return 0;
// }