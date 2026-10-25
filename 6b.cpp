
#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;

public:
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void display() {
        cout << "Volume = " << length * breadth * height << endl;
    }
};

int main() {
    Box b(10, 5, 2);

    b.display();

    return 0;
}
