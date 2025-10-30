#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast,lunch,dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    Meal m1=breakfast;    //Meal became a datatype
    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
return 0;
}
