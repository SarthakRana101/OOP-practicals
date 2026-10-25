
#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() {
        count = 0;
    }

    void increment() {
        count++;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c;

    c.display();

    c.increment();
    c.increment();

    c.display();

    return 0;
}
