#include <iostream>
using namespace std;

class Payment
{
public:
    // Pure virtual function for paying
    // Makes this class abstract - no direct instances allowed
    virtual void pay() = 0;
};

// Derived class implementing Credit Card payment method
class CreditCardPayment : public Payment
{
public:
    // Override pay() to provide specific implementation for credit card payment
    void pay() override
    {
        cout << "Processing credit card payment..." << endl;
    }
};

// Derived class implementing PayPal payment method
class PayPalPayment : public Payment
{
public:
    // Override pay() to provide specific implementation for PayPal payment
    void pay() override
    {
        cout << "Processing PayPal payment..." << endl;
    }
};

int main()
{
    // Declare a pointer to abstract base class Payment
    Payment *paymentMethod;

    // Use CreditCardPayment by instantiating derived class
    paymentMethod = new CreditCardPayment();

    // Call pay method — polymorphism calls CreditCardPayment's pay()
    paymentMethod->pay();

    // Delete previous object to prevent memory leak
    delete paymentMethod;

    // Switch payment method to PayPal
    paymentMethod = new PayPalPayment();

    // Call pay method — polymorphism calls PayPalPayment's pay()
    paymentMethod->pay();

    // Clean up dynamically allocated memory
    delete paymentMethod;

    return 0;
}
