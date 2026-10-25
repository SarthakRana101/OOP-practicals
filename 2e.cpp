#include <iostream>
#include <cmath>

int main() {
    std::cout << "Armstrong numbers between 1 and 1000:\n";

    for (int num = 1; num <= 1000; ++num) {
        int temp = num;
        int digitCount = 0;

        while (temp > 0) {
            digitCount++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum += std::round(std::pow(digit, digitCount));
            temp /= 10;
        }

        if (sum == num) {
            std::cout << num << " ";
        }
    }
    std::cout << "\n";

    return 0;
}