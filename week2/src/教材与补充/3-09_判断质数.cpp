#include <iostream>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    // divisor <= number / divisor 避免 divisor * divisor 溢出。
    for (int divisor = 2; divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid input.\n";
        return 1;
    }
    if (isPrime(number)) {
        std::cout << number << " is prime.\n";
    } else {
        std::cout << number << " is not prime.\n";
    }
    return 0;
}
