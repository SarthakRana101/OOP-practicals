#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string dept;
    float salary;

public:
    void input() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name & department: ";
        cin >> name >> dept;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "ID: " << id << "\n"
             << "Name: " << name << "\n"
             << "Department: " << dept << "\n"
             << "Salary: " << salary << "\n";
    }
}; 

int main() {
    Employee emp; // Instantiate an Employee object

    emp.input();   // Call member functions using the object
    emp.display();

    return 0;
}