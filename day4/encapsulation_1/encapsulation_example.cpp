#include <iostream>
using namespace std;

class ATM
{
private:
    int pin = 1234;        // private data - not directly accessible
    double balance = 5000; // private data - not directly accessible

    // Private method to verify the PIN entered by the user
    bool verifyPin(int enteredPin)
    {
        return enteredPin == pin;
    }

public:
    // Public method for withdrawing money
    void withdrawCash(int enteredPin, double amount)
    {
        if (verifyPin(enteredPin))
        { // check if entered pin is correct
            if (amount <= balance)
            {
                balance -= amount; // deduct amount from balance
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance." << endl;
            }
        }
        else
        {
            cout << "Invalid PIN!" << endl;
        }
    }

    // Public method for checking balance
    void checkBalance(int enteredPin)
    {
        if (verifyPin(enteredPin))
        {
            cout << "Your balance is: " << balance << endl;
        }
        else
        {
            cout << "Invalid PIN!" << endl;
        }
    }
};

int main()
{
    ATM myATM;

    myATM.withdrawCash(1234, 1000); // correct PIN
    myATM.checkBalance(1234);       // correct PIN

    myATM.withdrawCash(1111, 500); // wrong PIN
    return 0;
}
