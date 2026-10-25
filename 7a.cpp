#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "First complex number:\n";
    c1.input();

    cout << "Second complex number:\n";
    c2.input();

    c3 = c1 + c2;

    cout << "Sum = ";
    c3.display();

    return 0;
}
