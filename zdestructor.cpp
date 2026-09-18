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
    random.displaystudent();
    return 0;
}