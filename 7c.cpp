
#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    friend istream& operator>>(istream& in, Person& p) {
        cout << "Enter name: ";
        in >> p.name;

        cout << "Enter age: ";
        in >> p.age;

        return in;
    }

    friend ostream& operator<<(ostream& out, Person p) {
        out << "Name: " << p.name << endl;
        out << "Age: " << p.age << endl;

        return out;
    }
};

int main() {
    Person p;

    cin >> p;
    cout << p;

    return 0;
}
