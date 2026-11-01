#include <iostream>

int fact(int val);

int main() {
    int result = fact(5);
    std::cout << "5! is " << result << '\n';
    return 0;
}

int fact(int val) {
    int result = 1;
    while (val > 1) {
        result *= val--;
    }
    return result;
}
