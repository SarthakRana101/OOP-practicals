
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Main function started" << endl;

    Demo d1;

    cout << "Main function ending" << endl;

    return 0;// destructor for d1 will be called automatically when it goes out of scope
}
