#include <iostream>
using namespace std;

class Person
{
private:
    string name; // Hidden from outside
    int age;     // Hidden from outside

public:
    // Public method to access private data
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayData()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
