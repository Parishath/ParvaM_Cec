#include <iostream>
using namespace std;

class Battery; // Forward declaration

class Smartphone
{
private:
    string model;
    int batteryHealth; // Percentage 0-100

    // Declare Battery as friend class so it can access private members
    friend class Battery;

public:
    Smartphone(string m, int health) : model(m), batteryHealth(health) {}

    void showDetails()
    {
        cout << "Model: " << model << ", Battery Health: " << batteryHealth << "%" << endl;
    }
};

class Battery
{
public:
    void checkBatteryHealth(Smartphone &phone)
    {
        // Access private members of Smartphone directly due to friendship
        cout << "Checking battery health for " << phone.model << endl;
        if (phone.batteryHealth < 20)
        {
            cout << "Warning: Battery health is low! Consider replacing." << endl;
        }
        else
        {
            cout << "Battery health is good." << endl;
        }
    }

    void replaceBattery(Smartphone &phone)
    {
        cout << "Replacing battery for " << phone.model << endl;
        phone.batteryHealth = 100; // Reset battery health to 100%
    }
};

int main()
{
    Smartphone myPhone("SuperPhone X", 15); // Create smartphone with low battery health
    Battery myBattery;

    myPhone.showDetails(); // Show current smartphone info

    myBattery.checkBatteryHealth(myPhone); // Battery checks private batteryHealth

    myBattery.replaceBattery(myPhone); // Battery replaces battery (modifies private member)

    myPhone.showDetails(); // Show updated info after replacement

    return 0;
}
