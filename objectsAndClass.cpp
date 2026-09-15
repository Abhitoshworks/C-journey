#include<iostream>
using namespace std;
class student
    {
    public:
      string name;  
      int marks;
    
      void printDetails(){         //this
         cout<<"the name of the student is "<<this->name<<" and his marks are "<<this->marks<<endl;
      }};
int main(){
    student s1,s2;
    s1.name = "Abhitosh";   
    s1.marks = 69;
    s2.name = "Baranwal";
    s2.marks = 67;
    s1.printDetails();
    s2.printDetails();
    return 0;
}