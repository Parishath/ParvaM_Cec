#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber; // Private data member

public:
    // Setter - modifies the private variable
    void setRollNumber(int r)
    {
        rollNumber = r;
    }

    // Getter - returns the value of the private variable
    int getRollNumber()
    {
        return rollNumber;
    }
};

int main()
{
    Student s1;

    s1.setRollNumber(101);              // Set value using setter
    cout << s1.getRollNumber() << endl; // Get value using getter

    return 0;
}
