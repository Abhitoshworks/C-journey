#include <iostream>
using namespace std;
class lh6
{
public:
    string name;
    int rollno;
    int *marks;
    lh6()
    {
        cout << "Constructor called" << endl;
        name = "Abhitosh";

        rollno = 8725203;
        marks = new int;
        *marks = 67;
    }
    lh6(const lh6 &newobj){
        name = newobj.name;
        rollno = newobj.rollno;
        marks = new int;
        *marks = *(newobj.marks);
    }
    void displaystudent()
    {
        cout << "the name of the student is " << name << endl;
        cout << "the marks of the student are " << marks << endl;
        cout << "the roll number of the student is " << rollno << endl;
        cout << "the marks of the student are " << *marks << endl;
    }
    ~lh6()
    {
        cout << "destructor called" << endl;
        delete marks;
    }
};

int main()
{
    lh6 random;
    lh6 random2 = random;
    cout<<"Adress of random"<<random.marks<<endl;
    cout<<"Address of random"<<random2.marks<<endl; //diff address ayega kyoki new memory allocate hui copy constructor ki wajah se
    random.displaystudent();
    return 0;
}