#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string ownerName;
    double balance;

public:
    Account(string name, double bal) : ownerName(name), balance(bal)
    {
        cout << "Account constructor: Owner = " << ownerName << ", Balance = $" << balance << endl;
    }
};

class SavingsAccount : public Account
{
protected:
    double interestRate;

public:
    SavingsAccount(string name, double bal, double rate)
        : Account(name, bal), interestRate(rate)
    {
        cout << "SavingsAccount constructor: Interest rate = " << interestRate << "%" << endl;
    }
};

class PremiumSavingsAccount : public SavingsAccount
{
    bool hasCashback;

public:
    PremiumSavingsAccount(string name, double bal, double rate, bool cashback)
        : SavingsAccount(name, bal, rate), hasCashback(cashback)
    {
        cout << "PremiumSavingsAccount constructor: Cashback enabled = " << (hasCashback ? "Yes" : "No") << endl;
    }
};

int main()
{
    cout << "Creating Premium Savings Account...\n"
         << endl;
    PremiumSavingsAccount myAccount("Alice", 10000, 5.0, true);

    return 0;
}
