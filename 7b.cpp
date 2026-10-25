
#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    void input() {
        cin >> str;
    }

    bool operator==(String s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    String s1, s2;

    cout << "Enter first string: ";
    s1.input();

    cout << "Enter second string: ";
    s2.input();

    if (s1 == s2)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
