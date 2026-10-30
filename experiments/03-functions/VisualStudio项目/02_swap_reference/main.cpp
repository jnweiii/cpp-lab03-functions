#include <iostream>

namespace lesson {
void swap(int& v1, int& v2) {
    if (v1 == v2) {
        return;
    }
    int temp = v2;
    v2 = v1;
    v1 = temp;
}
}

int main() {
    int a, b;
    std::cout << "Enter a and b: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input.\n";
        return 1;
    }

    lesson::swap(a, a);
    std::cout << "After swap(a, a): a=" << a << ", b=" << b << '\n';
    lesson::swap(a, b);
    std::cout << "After swap(a, b): a=" << a << ", b=" << b << '\n';
    return 0;
}
