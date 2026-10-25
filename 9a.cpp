#include <iostream>
#include <string>
using namespace std;
 
class Person {
protected:
    string name;
    int age;
 
public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};
 
class Student : public Person {
    int rollNo;
 
public:
    void inputStudent() {
        inputPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
 
    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll Number: " << rollNo;
    }
};
 
int main() {
    Student s;
    s.inputStudent();
    s.display();
    return 0;