#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks[3];

public:
    void inputMarks() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks in 3 subjects: ";
        cin >> marks[0] >> marks[1] >> marks[2];
    }

    void calculateResult() {
        float total = marks[0] + marks[1] + marks[2];
        float percentage = (total / 300.0) * 100;

        cout << "\n--- Result ---";
        cout << "\nName       : " << name;
        cout << "\nRoll No    : " << rollNo;
        cout << "\nSubject 1  : " << marks[0];
        cout << "\nSubject 2  : " << marks[1];
        cout << "\nSubject 3  : " << marks[2];
        cout << "\nTotal      : " << total << " / 300";
        cout << "\nPercentage : " << percentage << "%\n";
    }
};

int main() {
    Student s1;

    cout << "=== Student Mark Entry ===\n";
    s1.inputMarks();
    s1.calculateResult();

    return 0;
}