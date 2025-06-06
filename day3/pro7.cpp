#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    // Default Constructor
    Car()
    {
        brand = "John";
        speed = 0;
        cout << "Default Constructor Called." << endl;
    }

    // Parameterized Constructor
    Car(string b, int s)
    {
        brand = b;
        speed = s;
        cout << "Parameterized Constructor Called." << endl;
    }

    // Copy Constructor
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
    Car car1; // Calls Default Constructor
    car1.drive();

    Car car2("Honda", 100); // Calls Parameterized Constructor
    car2.drive();

    Car car3 = car2; // Calls Copy Constructor
    car3.drive();

    return 0;
}