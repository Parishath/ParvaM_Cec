#include <iostream> // For input/output operations
#include <string>   // To use string data type
using namespace std;

// Class to represent a Patient
class Patient
{
private:
    string name;           // Patient's name, private to protect sensitive info
    string medicalHistory; // Patient's medical history, private data

    // Declare a friend function to access private members
    friend void displayPatientInfo(const Patient &p);

    // Declare a friend class Doctor that can access and modify private data
    friend class Doctor;

public:
    // Constructor to initialize Patient with name and medical history
    Patient(string n, string history) : name(n), medicalHistory(history) {}
};

// Friend function definition: can access Patient's private members
void displayPatientInfo(const Patient &p)
{
    cout << "Patient Name: " << p.name << endl;              // Access private 'name'
    cout << "Medical History: " << p.medicalHistory << endl; // Access private 'medicalHistory'
}

// Friend class definition: Doctor can access and modify Patient's private data
class Doctor
{
public:
    // Function to update patient's medical history
    void updateMedicalHistory(Patient &p, const string &newHistory)
    {
        p.medicalHistory = newHistory; // Modify private member directly
        cout << "Medical history updated by Doctor." << endl;
    }

    // Function to view patient's medical history (read-only)
    void viewMedicalHistory(const Patient &p)
    {
        cout << "Doctor views medical history: " << p.medicalHistory << endl; // Access private member
    }
};

int main()
{
    // Create Patient object with initial details
    Patient patient1("John Doe", "Diabetes, Hypertension");

    // Use friend function to display patient's info
    displayPatientInfo(patient1);

    // Create Doctor object
    Doctor doc;

    // Doctor updates patient's medical history
    doc.updateMedicalHistory(patient1, "Diabetes, Hypertension, Allergies");

    // Doctor views the updated medical history
    doc.viewMedicalHistory(patient1);

    return 0; // Program ends successfully
}
