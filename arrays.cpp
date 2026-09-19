#include<iostream>
using namespace std;
int total = 0;
int marks(int marks[5],int size){
    for (int i = 0; i < size; i++)
    {
        total = total + marks[i]; //or total+= marks
        
    }
    return total;
    
}
int main (){
    int mark[5] = {55,66,77,88,99};
    int final = marks(mark,5);
    cout<<"the total marks of the students are "<<final<<endl;
    
    return 0;
}