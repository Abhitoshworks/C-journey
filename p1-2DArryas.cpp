#include <iostream>
using namespace std;
int main(){
    int _2DArr[2][3] = {{4,5,6},{7,8,9}};
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
         cout<<"the value at index"<<i<<","<<j<<"is"<<_2DArr[i][j]<<endl;
       }
       
    }
    return 0;
}