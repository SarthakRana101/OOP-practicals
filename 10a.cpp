#include <iostream>
#include <string>
using namespace std;
 
class Employee {
public:
    int id;
    string name;
 
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};
 
int main() {
    Employee e;
    Employee *ptr = &e;
 
    ptr->id = 101;
    ptr->name = "Nihar";
 
    ptr->display();
 
    return 0;
}