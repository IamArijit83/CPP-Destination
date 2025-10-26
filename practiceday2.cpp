// -----------------------------------------------Day-2 Practice------------------------------------------------------------------
// -------------------------------------------Student Marks Analyzer--------------------------------------------------------------

#include<iostream>
#include<string>
using namespace std;

enum Subjects{Maths, Science, English};
const string subject_names[]={"Maths","Science","English"};

struct Student{
    string name;
    int roll;
    float marks[3];
    float total;
};

void inputdetails(Student &s);
void display(const Student s);
float calculateresult(const float marks[], int size=3);
Student& findtop(Student students[], int n);

int main(){
    int no;
    cout<<"--------------------------------Student Marks Analyzer--------------------------------------- "<<endl;
    cout<<"Enter the no. of students: ";
    cin>>no;

    if(no<1 || no>5){
        cout<<"Invalid Input! Select no. of students between (1-5)"<<endl;
        return 0;
    }

    Student students[5];

    for(int i=0;i<no;i++){
        cout<<"\nEnter details of Student "<<i+1<<endl;
        inputdetails(students[i]);
    }

    cout<<"\n----Student Records--------------------- "<<endl;
    for(int i=0;i<no;i++){
        display(students[i]);
    }

    Student &top = findtop(students,no);
    float p = (top.total / 300.0) * 100;
    char grade;

    if (p>=90) grade='A';
    else if (p>=80) grade='B';
    else if (p>=60) grade='C';
    else grade='F';

    cout<<"\nTop Student: "<<top.name<<endl;
    cout<<"Total: "<<top.total<<", Percentage: "<<p<<" , Grade: "<<grade<<endl;

    return 0;
}

void inputdetails(Student &s){
    cout<<"Enter name: ";
    cin>>s.name;

    cout<<"Enter Roll: ";
    cin>>s.roll;

    for(int i=Maths;i<=English;i++){
        cout<<"Enter Marks for "<<subject_names[i]<<": ";
        cin>>s.marks[i];
    }
    s.total = calculateresult(s.marks);
}

void display(const Student s){
    cout<<"Name: "<<s.name<<" Roll No.: "<<s.roll<<" , Marks: ";
    for(int i=Maths;i<=English;i++){
        cout<<subject_names[i]<<"="<<s.marks[i]<<" ";
    }
    cout<<", Total: "<<s.total<<endl;
}

float calculateresult(const float marks[], int size){
    float total=0;
    for(int i=0;i<size;i++){
        total+=marks[i];
    }
    return total;
}

Student& findtop(Student students[], int n){
    int maxind=0;
    for(int i=1;i<n;i++){
        if(students[i].total > students[maxind].total){
            maxind=i;
        }
    }
    return students[maxind];
}
