#include <iostream>
using namespace std;
class Sample
{
    int *data; // Pointer to heap memory
public:
    Sample()
    {
        data = new int; // Allocate memory
        *data = 10;
        cout << "Constructor: Memory allocated." << endl;
    }
    ~Sample()
    {
        delete data; // Free memory
        cout << "Destructor: Memory released." << endl;
    }
};
int main()
{
    Sample s1;
    return 0;
}