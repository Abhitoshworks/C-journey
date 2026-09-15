#include<iostream>
using namespace std;
int main(){
    int a = 67;
    int* ptr;
    ptr = &a;
    cout<<"the value at address a is "<<*ptr<<endl;
    cout<<"the address of a is "<<ptr<<endl;
    cout<<"the address of a is "<<&a<<endl;
    return 0;
}