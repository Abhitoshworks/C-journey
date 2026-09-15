// #include <iostream>
// using namespace std;
// int main(){
//     int marks[6] = {19,12,13,14,15,16};

//     for (int i = 1; i <= 6; i++)
//     {
//         cout<<"the marks of the student "<<i<<" is "<<marks[i]<<endl;
       
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout<<"the mark of "<<i<<"th student"<<endl;
         cin>>marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<"The marks of student "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
    
   
}