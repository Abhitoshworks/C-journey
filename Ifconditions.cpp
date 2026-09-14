#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if(a==18){
        cout<<"you can drive";
    }
    else if(a>150){
        cout<<"invalid age";
    }
    else{
        cout<<"you can not drive";
    }
    return 0;
}