          //Parameter Constructo
#include<iostream>
#include<string>
using namespace std;
class lh6{
    public:
    string name;
    int marks;
    int rollno;
 lh6(string n,int m,int r){
    cout<<"constructor called"<<endl;
    name = n;
    marks = m;
    rollno = r;
 }
  void displaymarks(){
    cout<<"the name of the student is "<<name<<" and his marks are "<<marks<<endl;
    cout<<"roll number of the student is "<<rollno;
  }};
int main(){
    lh6 random("Abhitosh",67,8720203);
    random.displaymarks();
    return 0;
}