#include <iostream>
using namespace std;
 
class Shape {
public:
    virtual void area() = 0;
};
 
class Triangle : public Shape {
    float base, height;
 
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
 
    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};
 
class Rectangle : public Shape {
    float length, width;
 
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
 
    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
 
int main() {
    Triangle t(4, 5);
    Rectangle r(6, 3);
 
    t.area();
    r.area();
 
    return 0;
}
