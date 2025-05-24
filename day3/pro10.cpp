#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Default constructor
    Person()
    {
        name = "Anonymous";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person p1;
    Person p2("John", 25);
    p1.display();
    p2.display();
    return 0;
}
