#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string n, int a)
    { // Parameterized constructor
        name = n;
        age = a;
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Student s1("Pavan", 21); // Passing arguments
    return 0;
}