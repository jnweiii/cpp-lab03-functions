#include <iostream>

int fact(int val) {
    int result = 1;
    while (val > 1) result *= val--;
    return result;
}

int main() {
    std::cout << "fact(3.14) = " << fact(3.14) << '\n';
    return 0;
}
