#include <iostream>
#include <cmath>

int main() {
    int choice;
    const double PI = 3.141592653589793;

    std::cout << "=== Area Calculator ===\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "4. Square\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            if (radius < 0) {
                std::cout << "Radius cannot be negative.\n";
            } else {
                std::cout << "Area of Circle = " << PI * radius * radius << "\n";
            }
            break;
        }
        case 2: {
            double length, width;
            std::cout << "Enter length and width: ";
            std::cin >> length >> width;
            if (length < 0 || width < 0) {
                std::cout << "Dimensions cannot be negative.\n";
            } else {
                std::cout << "Area of Rectangle = " << length * width << "\n";
            }
            break;
        }
        case 3: {
            double base, height;
            std::cout << "Enter base and height: ";
            std::cin >> base >> height;
            if (base < 0 || height < 0) {
                std::cout << "Dimensions cannot be negative.\n";
            } else {
                std::cout << "Area of Triangle = " << 0.5 * base * height << "\n";
            }
            break;
        }
        case 4: {
            double side;
            std::cout << "Enter side length: ";
            std::cin >> side;
            if (side < 0) {
                std::cout << "Side length cannot be negative.\n";
            } else {
                std::cout << "Area of Square = " << side * side << "\n";
            }
            break;
        }
        default:
            std::cout << "Invalid selection.\n";
            break;
    }

    return 0;
}