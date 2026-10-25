#include <iostream>
using namespace std;
 
class Base {
public:
    virtual void display() {
        cout << "Base class function." << endl;
    }
};
 
class Derived : public Base {
public:
    void display() override {
        cout << "Derived class function." << endl;
    }
};
 
int main() {
    Derived d;
    Base *ptr = &d;
 
    ptr->display();
 
    return 0;
}