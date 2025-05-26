#include <iostream>
#include <string>
using namespace std;

// ======= 1. Base class for Single, Multilevel, Hierarchical Inheritance =======
class Vehicle
{
protected:
    string brand;

public:
    Vehicle(string b) : brand(b)
    {
        cout << "Vehicle constructor called for " << brand << endl;
    }

    virtual void start()
    { // Virtual for polymorphism
        cout << brand << " vehicle starting..." << endl;
    }
};

// ======= 2. Single Inheritance =======
class Car : public Vehicle
{
    int seats;

public:
    Car(string b, int s) : Vehicle(b), seats(s)
    {
        cout << "Car constructor called." << endl;
    }

    void start() override
    {
        cout << brand << " car with " << seats << " seats starting." << endl;
    }
};

// ======= 3. Multilevel Inheritance =======
class ElectricCar : public Car
{
    int batteryCapacity;

public:
    ElectricCar(string b, int s, int battery) : Car(b, s), batteryCapacity(battery)
    {
        cout << "ElectricCar constructor called." << endl;
    }

    void start() override
    {
        cout << brand << " electric car with " << batteryCapacity << " kWh battery starting silently." << endl;
    }
};

// ======= 4. Hierarchical Inheritance =======
class Bike : public Vehicle
{
    bool hasCarrier;

public:
    Bike(string b, bool carrier) : Vehicle(b), hasCarrier(carrier)
    {
        cout << "Bike constructor called." << endl;
    }

    void start() override
    {
        cout << brand << " bike starting, carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
};

// ======= 5. Multiple Inheritance =======
class Radio
{
public:
    Radio()
    {
        cout << "Radio constructor called." << endl;
    }
    void playMusic()
    {
        cout << "Playing music from radio." << endl;
    }
};

class GPS
{
public:
    GPS()
    {
        cout << "GPS constructor called." << endl;
    }
    void navigate()
    {
        cout << "Navigating using GPS." << endl;
    }
};

// ======= Hybrid Inheritance =======
// A SmartCar inherits from ElectricCar, and also from Radio and GPS (Multiple + Multilevel)
class SmartCar : public ElectricCar, public Radio, public GPS
{
public:
    SmartCar(string b, int s, int battery)
        : ElectricCar(b, s, battery), Radio(), GPS()
    {
        cout << "SmartCar constructor called." << endl;
    }

    void start() override
    {
        ElectricCar::start(); // explicitly call ElectricCar's start()
        cout << "SmartCar additional smart features enabled." << endl;
    }

    void playMusic()
    { // Overriding to add extra behavior
        cout << "SmartCar is playing your favorite playlist." << endl;
    }
};

int main()
{
    cout << "--- Single Inheritance ---\n";
    Car c("Toyota", 5);
    c.start();

    cout << "\n--- Multilevel Inheritance ---\n";
    ElectricCar ecar("Tesla", 5, 100);
    ecar.start();

    cout << "\n--- Hierarchical Inheritance ---\n";
    Bike b("Honda", true);
    b.start();

    cout << "\n--- Multiple & Hybrid Inheritance ---\n";
    SmartCar sc("Tesla", 4, 120);
    sc.start();
    sc.playMusic();
    sc.navigate();

    return 0;
}
