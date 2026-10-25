#include <iostream>

int main() {
    int year;
    std::cout << "Enter a year: ";
    if (!(std::cin >> year)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << year << " is a leap year.\n";
    } else {
        std::cout << year << " is not a leap year.\n";
    }

    return 0;
}