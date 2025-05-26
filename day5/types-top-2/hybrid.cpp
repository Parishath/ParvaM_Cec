#include <iostream>
using namespace std;

class Person
{
public:
    void introduce()
    {
        cout << "I am a person." << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Studying..." << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "Working..." << endl;
    }
};

// Hybrid inheritance: inherits both Student and Employee
class WorkingStudent : public Student, public Employee
{
public:
    void manage()
    {
        cout << "Managing both work and studies." << endl;
    }
};

int main()
{
    WorkingStudent ws;
    // Need to specify which 'introduce()' to call due to ambiguity
    ws.Student::introduce();
    ws.Employee::introduce();
    ws.study();
    ws.work();
    ws.manage();
    return 0;
}
