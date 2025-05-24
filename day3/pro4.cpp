#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "Constructor called!" << endl;
    }
    ~Demo()
    {
        cout << "Destructor called!" << endl;
    }
};
int main()
{
    Demo d1;  // Constructor is called
    return 0; // At end of main, destructor is called
}