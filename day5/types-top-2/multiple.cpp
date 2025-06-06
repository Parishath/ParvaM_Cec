#include <iostream>
using namespace std;

class Camera
{
public:
    void takePhoto()
    {
        cout << "Taking photo..." << endl;
    }
};

class Phone
{
public:
    void makeCall()
    {
        cout << "Making a call..." << endl;
    }
};

class SmartPhone : public Camera, public Phone
{
public:
    void browseInternet()
    {
        cout << "Browsing internet..." << endl;
    }
};

int main()
{
    SmartPhone sp;
    sp.takePhoto();      // from Camera
    sp.makeCall();       // from Phone
    sp.browseInternet(); // own method
    return 0;
}
