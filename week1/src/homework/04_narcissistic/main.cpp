#include <iostream>

int main() {
    int number;
    std::cout << "Enter a three-digit integer: ";
    if (!(std::cin >> number) || number < 100 || number > 999) {
        std::cout << "Input must be an integer from 100 to 999.\n";
        return 1;
    }

    int hundreds = number / 100;
    int tens = number / 10 % 10;
    int units = number % 10;
    int cubeSum = hundreds * hundreds * hundreds +
                  tens * tens * tens + units * units * units;
    std::cout << number << (cubeSum == number ? " is a narcissistic number.\n"
                                            : " is not a narcissistic number.\n");

    std::cout << "All three-digit narcissistic numbers:";
    for (int current = 100; current <= 999; ++current) {
        hundreds = current / 100;
        tens = current / 10 % 10;
        units = current % 10;
        cubeSum = hundreds * hundreds * hundreds +
                  tens * tens * tens + units * units * units;
        if (cubeSum == current) {
            std::cout << ' ' << current;
        }
    }
    std::cout << '\n';
    return 0;
}
