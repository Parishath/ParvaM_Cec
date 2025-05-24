#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function (abstract method)
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Circle c;
    c.draw();

    return 0;
}
