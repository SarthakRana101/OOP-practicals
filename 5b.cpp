#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    void inputDetails() { //member function
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name (no spaces): ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nSalary      : " << salary << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    cout << "Enter details for 3 Employees \n";
    e1.inputDetails();
    e2.inputDetails();
    e3.inputDetails();

    cout << "\nEmployee Records \n";
    e1.displayDetails();
    e2.displayDetails();
    e3.displayDetails();

    return 0;
}