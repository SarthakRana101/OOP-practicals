#include <iostream>
using namespace std;
 
class Person {
public:
    int id;
 
    Person() {
        id = 10;
    }
};
 
class Student : virtual public Person {
};
 
class Employee : virtual public Person {
};
 
class TeachingAssistant : public Student, public Employee {
public:
    void display() {
        cout << "ID: " << id << endl;
    }
};
 
int main() {
    TeachingAssistant t;
    t.display();
    return 0;
}
