// Day-2
// Pointer test................................
// Pointer is a kind of datatype that holds address of others
//&------------->Address of operators
//*------------->Dereference operator

// #include<iostream>
// using namespace std;
// int main(){
//     int a=3;
//     int *b = &a;    
//     cout<<b<<endl;              //Address of a copied in b-----------------0x61ff0c
//     cout<<&a<<endl;             //Address of a-----------------------------0x61ff0c
//     cout<<a<<endl;              //Value assigned in a----------------------3
//     cout<<*b<<endl;             //value assigned in a pointing by b--------3
//     cout<<&b<<endl;             //Address of b-----------------------------0x61ff08

//     // Pointer to Pointer
//     int** c=&b;
//     cout<<c<<endl;                 //Address of b stored in c--------------0x61ff08
//     cout<<*c<<endl;                 //Address of b pointing by c-----------0x61ff0c
//     cout<<&c<<endl;                 //Address of c-------------------------0x61ff04
//     cout<<**c<<endl;                //Derefernced, so the original value---3
// return 0;
// }


//Arrays test(collection of items of similar type stored in contiguous memory locations)----------------
// #include<iostream>
// using namespace std;
// int main(){
    // int marks[]={98,99,94,96};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // int mathmarks[4];
    // mathmarks[0]=78;
    // mathmarks[1]=83;
    // mathmarks[2]=90;
    // mathmarks[3]=95;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // Using for loop 
    // for(int i=0;i<4;i++){
    //     cout<<"The value of Maths Marks "<<i<<": "<<mathmarks[i]<<endl;
    // }
    //Using While loop
    // int i=0;
    // while(i<4){
    //     cout<<"The value of Maths Marks "<<i<<": "<<mathmarks[i]<<endl;
    //     i++;
    // }
    //Using Do-while loop
//     int i=0;
//     do{
//         cout<<"The value of Maths Marks "<<i<<": "<<mathmarks[i]<<endl;
//         i++;
//     }while(i<4);
//     return 0;
// }


// //Pointers and Arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={89,99,83,90};
//     // for(int i=0;i<4;i++){
//     //     cout<<"The value of Maths Marks "<<i<<": "<<mathmarks[i]<<endl;           
//     // }
//     int *p=marks;
//     // cout<<"The value of *p :   "<<(*p)<<endl;
//     // cout<<"The value of *p+1 : "<<*(p+1)<<endl;
//     // cout<<"The value of *p+2 : "<<*(p+2)<<endl;
//     // cout<<"The value of *p+3 : "<<*(p+3)<<endl;
//     // cout<<"The value of *p+3 : "<<(*p+3)<<endl;
//     cout<<"Before           :  "<<*p<<endl;      //-----------the first position
//     cout<<"On  p++          :  "<<*(p++)<<endl; //--------incrementing and moving to the next element
//     cout<<"After            :  "<<*p<<endl;         //----------moving to the next pointer
//     cout<<"On ++p           :  "<<*(++p)<<endl; //--------incrementing and moving from the right side or the back
//     cout<<"After            :  "<<*p<<endl;         //----------moving to the next pointer
// return 0;
// }


//Structures and Unions test-------------------------------------------------------------

//Structures
// #include<iostream>
// using namespace std;

// // struct employee{
// //     int eid;
// //     char name;
// //     float salary;
// // };

// typedef struct employee{
//     int eid=2;
//     char name='B';
//     float salary=30000000;        
// }ep;

// int main(){
//     // struct employee arx;
//     // arx.eid=1;
//     // arx.name='A';
//     // arx.salary=30000000;
//     // cout<<arx.eid<<endl;
//     // cout<<arx.name<<endl;
//     // cout<<arx.salary<<endl;

//     ep arx;
//     cout<<arx.eid<<endl;
//     cout<<arx.name<<endl;
//     cout<<arx.salary<<endl;
// return 0;
// }

//Unions--------------------------------------------------------
// #include<iostream>
// using namespace std;

// union money{
//     int id;
//     char car;
//     float sal;
// };

// int main(){
//     union money m1;
//     m1.id=1;
//     m1.car='B';         //This is overwriting the id
//     cout<<m1.id<<endl;
//     cout<<m1.car<<endl;
// return 0;
// }   


//enums test...........................................
// #include<iostream>
// using namespace std;

// int main(){
//     enum Meal{breakfast,lunch,dinner};
//     // cout<<breakfast<<endl;
//     // cout<<lunch<<endl;
//     // cout<<dinner<<endl;

//     Meal m1=breakfast;    //Meal became a datatype
//     cout<<m1<<endl;
//     cout<<(m1==1)<<endl;
// return 0;
// }



//Functions and Function Prototype test----------------------------------------------------------
// Functions----------------------------Usually made before main function
// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }

// int main(){
//     int num1,num2;
//     cout<<"Enter first number: ";
//     cin>>num1;
//     cout<<"Enter second number: ";
//     cin>>num2;
//     cout<<"The sum is: "<<sum(num1,num2);
// return 0;
// }

//Function prototyping test----------------------------------------------------------------------------------
//Manier times we want our functions to be later in our code so we use function prototyping

// #include<iostream>
// using namespace std;

// int sum(int a, int b);          //Acceptable
// // int sum(int a,  b);             //innaceptable
// // int sum(int , int);             //acceptable

// int main(){
//     int num1,num2;                       //The parameters actually used are actual parameters     --num1,num2          
//     cout<<"Enter the first number: ";
//     cin>>num1;
//     cout<<"Enter the second number: ";
//     cin>>num2;
//     cout<<"The sum of num1 and num2 is: "<<sum(num1,num2);
// return 0;
// }

// int sum(int a,int b){                    //The parameters used inside functions are formal parameters   --a,b
//     int c=a+b;
//     return c;
// }

//No return
// #include<iostream>
// using namespace std;

// void g();

// int main(){
//     g();
// return 0;
// }   

// void g(){
//     cout<<"Hello, Good Morning";
// }



//Call By refernce and Call By Value test-------------------------------------------------
// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }

// // int swap(int a,int b){       //This will not work
// //     int temp=a;
// //     a=b;
// //     b=temp;
// // }

// // int swappointer(int* a, int* b ){
// //     int temp=*a;
// //     *a=*b;
// //     *b=temp;
// // }

// int swaprefernce(int& a, int& b ){
//     int temp=a;
//     a=b;
//     b=temp;
// }


// int main(){
//     int x=4, y=5;
//     // cout<<"The sum of 44 and 33 is: "<<sum(44,33)<<endl;
//     // cout<<"Before Swap: "<<x<<" "<<y<<endl;
//     // swap(x,y);
//     // cout<<"After Swapping: "<<x<<" "<<y;
    
//     //Call by reference
//     // cout<<"Before Swap: "<<x<<" "<<y<<endl;
//     // swappointer(&x,&y);
//     // cout<<"After Swapping: "<<x<<" "<<y;
    
    
//     //Call by refernce value
//     cout<<"Before Swap: "<<x<<" "<<y<<endl;
//     swaprefernce(x,y);
//     cout<<"After Swapping: "<<x<<" "<<y;
//     return 0;
// }

//Return by refernce

// #include<iostream>
// using namespace std;

// int& refvar(int& a,int&b){
//     int temp=a;
//     a=b;
//     b=temp;
// } 

// int main(){
//     int x=4,y=5;
//     cout<<"Before "<<x<<" and "<<y<<endl;
//     refvar(x,y);
//     cout<<"After "<<x<<" and "<<y;
// return 0;
// }



//Inline functions,Default arguements & constant arguements
// #include<iostream>
// using namespace std;


// //Normally in a function if there is a function called then the actual arguements are copied into the formal arguements, then loaded or copied into register
// // and a lot of work is done which becomes overhead.
// //To save time and drop all unnecessary cost------Inline Function is used

// inline int product(int a,int b){
//     return a*b;
// }

// int main(){
//     int x,y;
//     cout<<"Enter the first number: ";
//     cin>>x;
//     cout<<"Enter the second number: ";
//     cin>>y;
//     cout<<"The value after product: "<<product(x,y);

// return 0;
// }



// //static variable test----------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int prod(int a,int b){
//     static int c=0;
//     c=c+1;
//     return a*b+c;
// }

// int main(){
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<prod(a,b);
// return 0;
// }


//Default Arguements test-----------------------------
// #include<iostream>
// using namespace std;

// float moneyrec(int currmon,float factor=1.04){            //----------------------factor=1.04---Default arguement
//     return currmon*factor;
// }

// int main(){
//     int money;
//     cout<<"Enter money: ";
//     cin>>money;

//     cout<<"If you have "<<money<<"Rs in your account, you will recieve Rs."<<moneyrec(money)<<" after 1 year";

// return 0;
// }



//Constant arguements test------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int strlen(const char* p){

// }

// int main(){

// return 0;
// }




//Recursion test...............----------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }



// int main(){
//     int a;
//     cout<<"Enter a number: "<<endl;
//     cin>>a;
//     cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

// return 0;
// }


// fibonacci series--------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n<=1){
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }

// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"The fibonacci series upto "<<num<<"th term is: "<<fib(num);
// return 0;
// }




//Function Overloading test------------------------------------------------------------
// #include<iostream>
// using namespace std;

// // int add(int a,int b){
// //     cout<<"Using function with 2 args............"<<endl;
// //     return a+b;
// // }

// // int add(int a,int b, int c){
// //     cout<<"Using function with 3 args............"<<endl;
// //     return a+b+c;
// // }

// int volume(int r,int h){
//     return (3.14*(r*r)*h);
// }

// int volume(int a){
//     return (a*a*a);
// }

// int volume(int l,int b, int h){
//     return (l*b*h);
// }

// int main(){
//     // cout<<"The sum of 3 and 6 is: "<<add(3,6)<<endl;
//     // cout<<"The sum of 3,7 and 9 is: "<<add(3,7,9)<<endl;
//     cout<<"The volume of cylinder is: "<<volume(3,7)<<endl;
//     cout<<"The volume of cube is: "<<volume(4)<<endl;
//     cout<<"The volume of cuboid is: "<<volume(3,7,9)<<endl; 
// return 0;
// }