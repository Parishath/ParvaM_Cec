#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    Student(const Student &s)
    { // Copy constructor
        name = s.name;

        age = s.age;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Student s1("John", 25);
    Student s2 = s1; // Copy constructor is called here
    s2.display();
    return 0;
}