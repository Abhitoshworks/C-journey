#include<iostream>
#include<string>
using namespace std;
int main(){
    string a = "Abhitosh Baranwal";
    cout<<"length of sting is: "<<a.length()<<endl;
    cout<<"the substring length is: "<<a.substr(3,4); //substr(pos,len)
    return 0;
}