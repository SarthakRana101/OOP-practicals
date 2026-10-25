#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << n << " is neither prime nor composite.\n";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << n << " is a Prime number.\n";
    } else {
        std::cout << n << " is a Composite number.\n";
    }

    return 0;
}