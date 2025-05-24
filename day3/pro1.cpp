#include <iostream>
using namespace std;
class Student
{

public:
    Student()
    { // Default constructor
        cout << "Default constructor called!" << endl;
    }
};
int main()
{
    Student s1; // Object created, constructor is called automatically
    return 0;
}