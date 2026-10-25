#include <iostream>
using namespace std;

class Demo {
    static int count;

public:
    Demo() {
        count++;
    }

    static void display() {
        cout << "Number of objects = " << count << endl;
    }
};

int Demo::count = 0;

int main() {
    Demo d1;
    Demo d2;
    Demo d3;

    Demo::display();

    return 0;
}
