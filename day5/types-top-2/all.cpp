#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    Person(string n) : name(n)
    {
        cout << "Person constructor called for: " << name << endl;
    }
    void introduce()
    {
        cout << "Hi, I am " << name << endl;
    }
};

// Virtual inheritance to prevent ambiguity in hybrid inheritance
class Student : virtual public Person
{
protected:
    int studentID;

public:
    Student(string n, int id) : Person(n), studentID(id)
    {
        cout << "Student constructor called. ID: " << studentID << endl;
    }
    void study()
    {
        cout << name << " is studying." << endl;
    }
};

// Multilevel Inheritance
class GraduateStudent : public Student
{
protected:
    string researchTopic;

public:
    GraduateStudent(string n, int id, string topic)
        : Person(n), Student(n, id), researchTopic(topic)
    {
        cout << "GraduateStudent constructor called. Topic: " << researchTopic << endl;
    }
    void research()
    {
        cout << name << " is researching on " << researchTopic << endl;
    }
};

// Employee for Multiple Inheritance
class Employee : virtual public Person
{
protected:
    string department;

public:
    Employee(string dept) : Person("Unknown"), department(dept)
    {
        cout << "Employee constructor called. Department: " << department << endl;
    }
    void work()
    {
        cout << "Working in " << department << " department." << endl;
    }
};

// Multiple Inheritance: Student + Employee
class TeachingAssistant : public Student, public Employee
{
public:
    TeachingAssistant(string n, int id, string dept)
        : Person(n), Student(n, id), Employee(dept)
    {
        cout << "TeachingAssistant constructor called." << endl;
    }
    void assist()
    {
        cout << name << " is assisting in " << department << endl;
    }
};

// Hierarchical Inheritance
class Professor : virtual public Person
{
protected:
    string subject;

public:
    Professor(string n, string sub) : Person(n), subject(sub)
    {
        cout << "Professor constructor called. Subject: " << subject << endl;
    }
    void teach()
    {
        cout << name << " is teaching " << subject << endl;
    }
};

// Hybrid Inheritance: Professor + GraduateStudent
class ResearchProfessor : public Professor, public GraduateStudent
{
public:
    ResearchProfessor(string n, string sub, int id, string topic)
        : Person(n), Professor(n, sub), GraduateStudent(n, id, topic)
    {
        cout << "ResearchProfessor constructor called." << endl;
    }
    void conductResearch()
    {
        cout << name << " conducts research on " << GraduateStudent::researchTopic
             << " and teaches " << subject << endl;
    }
};

int main()
{
    cout << "\n--- Single Inheritance ---\n";
    Student s("Alice", 101);
    s.introduce();
    s.study();

    cout << "\n--- Multilevel Inheritance ---\n";
    GraduateStudent gs("Bob", 102, "Artificial Intelligence");
    gs.introduce();
    gs.study();
    gs.research();

    cout << "\n--- Multiple Inheritance ---\n";
    TeachingAssistant ta("Charlie", 103, "Computer Science");
    ta.introduce();
    ta.study();
    ta.work();
    ta.assist();

    cout << "\n--- Hierarchical Inheritance ---\n";
    Professor p("Dr. Smith", "Mathematics");
    p.introduce();
    p.teach();

    cout << "\n--- Hybrid Inheritance ---\n";
    ResearchProfessor rp("Dr. Jones", "Physics", 104, "Quantum Mechanics");
    rp.introduce();
    rp.teach();
    rp.research();
    rp.conductResearch();

    return 0;
}
