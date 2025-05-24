#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    // Temporarily add a constructor for original object creation
    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }

    // Copy Constructor only for demonstration
    Car(const Car &c)
    {
        brand = c.brand;
        speed = c.speed;
        cout << "Copy Constructor Called." << endl;
    }

    void drive()
    {
        cout << "Driving " << brand << " at " << speed << " km/h." << endl;
    }
};

int main()
{
    Car original("Toyota", 120); // Only for creating a base object
    original.drive();

    Car copy = original; // Calls Copy Constructor
    copy.drive();

    return 0;
}
