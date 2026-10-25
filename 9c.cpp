#include <iostream>
using namespace std;
 
class Shape {
public:
    void show() {
        cout << "This is a shape." << endl;
    }
};
 
class Circle : public Shape {
    float radius;
 
public:
    Circle(float r) {
        radius = r;
    }
 
    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};
 
class Square : public Shape {
    float side;
 
public:
    Square(float s) {
        side = s;
    }
 
    void area() {
        cout << "Area of Square: " << side * side << endl;
    }
};
 
int main() {
    Circle c(2);
    Square s(4);
 
    c.show();
    c.area();
    s.show();
    s.area();
 
    return 0;
}
