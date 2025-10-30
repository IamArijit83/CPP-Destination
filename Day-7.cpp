// Day-7
// Abstract Base Classes and pure virtual functions------------------------------------------------------------------
// Somtimes a base class that we dont want to use directly, that time we use abstract base classes
// A virtual class lets c++ decide which function to call at the runtime depending upon the object
// A class that has at least one pure virtual function.
// You cannot create an object of an abstract class.

// Pure Virtual Function---A virtual function with no definition in the base class — only a “must implement” instruction for derived classes.


// #include<iostream>
// using namespace std;

// class car{
//     protected:
//         string name;
//         float hp;
//     public:
//         car(string n, float p){
//             name=n;
//             hp=p;
//         }
//         virtual void display()=0;       //Do-nothing function---->Pure Virtual Function
// };

// class carcolor:public car{
//     float price;
//     public:
//         carcolor(string n,float p,float x):car(n,p){
//             price=x;
//         }
//     void display(){
//         cout<<"This is an amazing car: "<<name<<endl;
//         cout<<"The Horsepower is : "<<hp<<"hp"<<endl;
//         cout<<"The Price of Color is : "<<price<<endl;
//         }

// };

// class cartorque:public car{
//     int tq;
//     public:
//         cartorque(string n,float p,int cc):car(n,p){
//             tq=cc;
//         }
//     void display(){
//         cout<<"This is an amazing car: "<<name<<endl;
//         cout<<"The Horsepower is : "<<hp<<"hp"<<endl;
//         cout<<"The torque is : "<<tq<<"nm"<<endl;
//     }
// };

// int main(){
//     string name;
//     float hp,price;
//     int tq;

//     name = "BMW";
//     hp = 645;
//     price = 20000000;

//     carcolor bmv(name, hp, price);
//     bmv.display();

//     cout << endl;

//     cartorque buick("Audi", 630, 1000);
//     buick.display();
// return 0;
// }



// File I/O----------------------------------------------------------------------------------------------
// File can be considered as a pattern in data that is being stored in disk
// Useful classes for working with files in C++ are:
// 1. ftreambase
// 2. ifstreambase ---> derived from fstreambase
// 3. ofstreambase ---> derived from fstreambase

/*
In order to work with files in C++, so for opening a file there are two ways
1. Using the Constructor
2. Using the member function open() of the class
*/


// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // Opening files using Constructors and writing in it
//     string st="Max Verstappen";
//     ofstream out("day7.txt");   //Write Operation
//     out<<st;

// return 0;
// }


// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // Opening files using Constructors and reading from it
//     string st2;
//     ifstream in("day7b.txt");   //Write Operation
//     getline(in,st2);
//     // getline(in,st2);
//     // // getline(in,st2);
//     // // getline(in,st2);
//     cout<<st2;
// return 0;
// }


// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
//     ofstream o("day7.txt");
//     cout<<"Enter your name: ";
//     string name;
//     cin>>name;

//     o<<name<<" Welcome to the podium";
//     o.close();

//     ifstream read("day7.txt");
//     string content;
//     read>>content;
//     cout<<"The content in the file is: "<<content;
//     // getline(read,content);
//     read.close();
// return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<string>

// using namespace std;
// int main(){
//     ofstream out;
//     out.open("day7b.txt");
//     out<<"Simply Lovely!\n";
//     out<<"Its Hammertime!\n";
//     out<<"Lets add that to the words of wisdom!";
//     out.close();

//     ifstream in;
//     string st,st2;
//     in.open("day7b.txt");
//     // in>>st>>st2;
//     // cout<<st<<st2;

//     while(in.eof()==0){
//         getline(in,st);
//         cout<<st<<endl;
//     }
//     in.close();
// return 0;
// }


// Templates are called Parameterized classes
// templates are used for following the DRY(Dont Repeat Yourself) principle

// #include<iostream>
// using namespace std;

// template<class T>
// class vector{
//     public:
//         T *arr;
//         int size;
//         vector(int m){
//             size=m;
//             arr=new T[size];
//         }
//     T dot(vector &v){
//         T d=0;
//         for(int i=0;i<size;i++){
//             d+=this -> arr[i]*v.arr[i];
//         }
//         return d;
//     }
// };

// int main(){
//     vector <float> v1(3);
//     v1.arr[0]=33.44;
//     v1.arr[1]=44.2;
//     v1.arr[2]=16.2;

//     vector <float> v2(3);
//     v2.arr[0]=24.1;
//     v2.arr[1]=83.0;
//     v2.arr[2]=14.2;

//     float a=v1.dot(v2);
//     cout<<a<<endl;
//     return 0;
// }


// Class templates with multiple parameters------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// template<class T1, class T2>
// class myclass{
//     public:
//         T1 data1;
//         T2 data2;
//         myclass(T1 a,T2 b){
//             data1=a;
//             data2=b;
//         }
//         void display(){
//             cout<<this->data1<<endl<<this->data2;
//         }
// };

// int main(){
//     // myclass <int,char> obj(33,'V');
//     // obj.display();
//     myclass <int,float> obj(8,1.8);
//     obj.display();
// return 0;
// }


// Templates with Default Parameters

// #include<iostream>
// using namespace std;

// template<class T1=int,class T2=float, class T3=char>
// class Lewis{
//     public:
//         T1 a;
//         T2 b;
//         T3 c;
//         Lewis(T1 x,T2 y,T3 z){
//             a=x;
//             b=y;
//             c=z;
//         }
//     void display(){
//         cout<<"The value of a is: "<<a<<endl;
//         cout<<"The value of b is: "<<b<<endl;
//         cout<<"The value of c is: "<<c<<endl;
//     }
// };

// int main(){
//     Lewis<> l(44,7.0,'x');
//     l.display();
//     cout<<endl;
//     Lewis<char,float,int> g('M',33.0,1);
//     g.display();
// return 0;
// }



// Function Templates-----------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// template<class T>
// void swapp(T &a, T&b){
//     T temp=a;
//     a=b;
//     b=temp;
// }

// template<class T1, class T2>
// float funcavg(T1 a,T2 b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

// int main(){
//     float a;
//     a=funcavg(5,2.8);
//     cout<<"The average of these numbers is: "<<a<<endl;
//     int x=33,y=44;
//     swapp(x,y);
//     cout<<x<<endl<<y;
// return 0;
// }



// Member function template and overloading template function

// #include<iostream>
// using namespace std;

// template<class T>
// class Max{
//     public:
//         T data;
//     Max(T a){
//         data=a;
//     }
//     void display();
// };
// template<class T>
// void Max<T>:: display(){
//     cout<<data;
// }

// void func(int a){
//     cout<<"I am Lewis"<<a<<endl;
// }

// template<class T>
// void func1(T a){
//     cout<<"I am Alonso"<<a<<endl;
// }
// int main(){
//     // Max<int>m(33);
//     // Max<char>m('V');
//     // Max<float>m(1.0);
//     // cout<<m.data<<endl;
//     // m.display();

//     // func(44);     //Exact match takes the highest priority
//     func1(14);
// return 0;
// }


// STL(Standard Template Libraries)-------------------------------------------------------------------------------------
// Library of Generic classes and functions-----------------------------------------------------------------------------
// Components of stl:
// 1.Containers- Stores Data - Vector- Uses Template classes
// 2.Algorithms- Set of procedures to manipulate date to get the desired result - Searching, Sorting- Template functions
// 3.Iterators-  Object that points to an element in a container - Handled just like pointers -Connects algorithms with containers 

// 1.Containers Types:
// 1.1 Sequence Containers - Stores data in Linear fashion - Vector,List,Queue
// 1.2 Associative Containers - To get faster access/Direct access of the elements - Tree, Set , Multiset, Map, Multi-map
// 1.3 Derived Containers - Real world Modelling - Stacks, Queue, Priority Queue

// Vector - Random Access fast , insertion-deletion in middle slow, but insertion at the end is fast as compared to arrays
// List - Random Access slow , insertion in middle fast, Insertion at the end is fast

// Associative Containers - All operations are fast other than Random Access 

// Derived Containers - Depends - Data Structures



// Vectors----(Dynamic Array Size)---------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// template <class T>
// void display(vector<T> &v){
//     cout<<"Displaying this vector"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector <int> vec1;
//     vector <char> vec2(4); 
//     vector<char> vec3(vec2);
//     vector<int> v(6,3);

//     display(vec1);

//     int ele,size;
//     // cout<<"Enter the size of the vector "<<endl;
//     // cin>>size;
//     // for(int i=0; i<size;i++){
//     //     cout<<"Enter the elements: ";
//     //     cin>>ele;
//     //     vec1.push_back(ele);
//     // }
//     // vec1.pop_back();
//     // display(vec1);
//     // vector<int>::iterator iter=vec1.begin();
//     // vec1.insert(iter,500);   //Inserts 500
//     // // vec1.insert(iter+1,500); //Inserts at 2nd position(pointer was previously pointing at 1 now pointing at 2)
//     // // vec1.insert(iter+1,5,500);  //5 copies of 500
//     // display(vec1);
// return 0;
// }



// Lists in STL----------------------------------------------------------------------------------------------------

// #include<iostream>
// #include<list>
// using namespace std;

// void display(list<int> &lst){
//     list<int>::iterator it;
//     for(it=lst.begin();it!=lst.end();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     list<int> list1;    //list of 0 length
    
//     list1.push_back(33);
//     list1.push_back(44);
//     list1.push_back(16);
//     list1.push_back(22);
//     list1.push_back(24);
//     display(list1);
//     list1.sort();
//     display(list1);
//     list1.reverse();
//     display(list1);
//     // list1.pop_back();
//     // display(list1);
//     // list1.pop_front();
//     // display(list1);
//     // list1.remove(22);
//     // display(list1);



//     list<int> list2(3); //Empty list of size 7
//     list<int>::iterator iter;
//     iter=list2.begin();
//     *iter=44;
//     iter++;
//     *iter=33;
//     iter++;
//     *iter=16;
//     iter++;
//     display(list2);


//     // list<int>::iterator iter;
//     // iter=list1.begin();
//     // cout<<*iter<<" ";
//     // iter++;
//     // cout<<*iter<<" ";
//     // iter++;
//     // cout<<*iter<<" ";
//     // iter++;
//     // cout<<*iter<<" ";
//     // iter++;
// return 0;
// }


// Maps---------------------------------------------------------------------------------------------------------------
// Map is an associative array

// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;

// int main(){
//     map<string, int> map1;
//     map1["Arijit"]=99;
//     map1["Damini"]=98;
//     map1["Lewis"]=92;
//     map1["Max"]=97;

//     map<string,int>::iterator itr;
//     for(itr=map1.begin();itr!=map1.end();itr++){
//         cout<<(*itr).first<<" "<<(*itr).second<<"\n";
//     }
// return 0;
// }


// Function Objects-------------------------------------------------------------------------------------------------
// Function Object- Function wrapped in a class, so that it is available like an object

// #include<iostream>
// #include<functional>
// #include<algorithm>


// using namespace std;
// int main(){
//     int arr[]={33,44,16,14,22,83};
//     // sort(arr,arr+6);                     //By default ascending order
//     sort(arr,arr+6,greater<int>());         //Descending Order  //Function object ---> also called Functor 
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }
// return 0;
// }