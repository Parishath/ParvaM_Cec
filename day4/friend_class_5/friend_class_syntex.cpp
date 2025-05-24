#include <iostream>
using namespace std;

class Engine;

// Define class Car
class Car
{
private:
    int speed; // Private member variable 'speed' to store the speed of the car

    // Declare Engine as a friend class
    // This means all methods inside Engine can access Car's private and protected members
    friend class Engine;

public:
    // Constructor to initialize speed
    Car(int s) : speed(s) {}
};

// Define class Engine
class Engine
{
public:
    // Method that can access Car's private members because Engine is declared as friend of Car
    void showSpeed(Car c)
    {
        cout << "Speed of car: " << c.speed << endl; // Access private member 'speed' of Car object
    }
};

int main()
{
    Car myCar(120);  // Create Car object with speed 120
    Engine myEngine; // Create Engine object

    myEngine.showSpeed(myCar); // Engine accesses Car's private member and displays speed
    return 0;
}
