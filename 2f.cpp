#include <iostream>

int main() {
    int i = 0;

    std::cout << "Numbers from 1 to 100 (excluding multiples of 5):\n";

    while (i < 100) {
        i++;
        if (i % 5 == 0) {
            continue; 
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}