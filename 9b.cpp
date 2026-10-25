#include <iostream>
#include <string>
using namespace std;
 
class Person {
protected:
    string name;
 
public:
    void inputName() {
        cout << "Enter name: ";
        cin >> name;
    }
};
 
class Marks {
protected:
    int m1, m2;
 
public:
    void inputMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> m1 >> m2;
    }
};
 
class Result : public Person, public Marks {
public:
    void displayResult() {
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << m1 + m2;
    }
};
 
int main() {
    Result r;
    r.inputName();
    r.inputMarks();
    r.displayResult();
    return 0;
}
