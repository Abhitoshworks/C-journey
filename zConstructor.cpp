#include<iostream>
using namespace std;

class s1{
public:
string name;
int marks;
s1(string n,int m ){    
      name = n;  
      marks = m;
}};
int main(){
   s1 obj("Abhitosh",69);
   cout<<"the name of the student is "<<obj.name<<" and his marks are "<<obj.marks;
   return 0;
}