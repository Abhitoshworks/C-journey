#include<iostream>
using namespace std;
class lh1{
    public:
    int marks;
    string name;
    int rollno; 
    lh1(){                 //constructor
     name = "Abhitosh";
     marks = 69;   
     rollno = 2025293205;
    cout<<"Constructor called"<<endl;
       }
    void displaystudentsname(){
        cout<<"the name of the student is "<<name<<endl;
        cout<<"the marks of the student is "<<marks<<endl;
        cout<<"the rollnumber of the student is "<<rollno<<endl;
    }
};
int main(){
   lh1 coolstudent; //bina object ke constructor call nhi hoga
   cout<<coolstudent.name<<endl; //obj se call hota hai constructor 
   coolstudent.displaystudentsname();
   return 0;
}