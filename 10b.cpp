#include <iostream>
using namespace std;
 
class Number {
private:
    int value;
 
public:
    void setValue() {
        value = 25;
    }
 
    void display() {
        cout << "Value: " << value << endl;
    }
};
 
int main() {
    Number n;
    void (Number::*ptr)() = &Number::setValue;
    (n.*ptr)();
 
    void (Number::*showPtr)() = &Number::display;
    (n.*showPtr)();
 
    return 0;
}
