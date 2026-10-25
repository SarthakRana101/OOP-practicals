#include <iostream>

int main() {
    int n;
    std::cout << "Enter number of terms (N): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer greater than 0.\n";
        return 0;
    }

    long long first = 0, second = 1;

    std::cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << first << (i == n ? "" : ", ");
        long long next = first + second;
        first = second;
        second = next;
    }
    std::cout << "\n";

    return 0;
}