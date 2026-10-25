#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int a, int b) {
        x = a;
        y = b;
    }

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1(10, 20);
    Point p2(p1);

    cout << "First object: ";
    p1.display();

    cout << "Copied object: ";
    p2.display();

    return 0;
}
