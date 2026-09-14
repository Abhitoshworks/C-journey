#include<iostream>
using namespace std;
int main(){
    int i = 17;
    // for( i = 0; i<=15;i++){
    //     cout<<"The value of i is "<<i<<endl;
    // }
    // while (i<=15)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    //     i = i+1;
    // }
    do{
      cout<<"the value of i is "<<i<<endl;
        i = i+1;
    }
    while (i<15);
    
    return 0;
}