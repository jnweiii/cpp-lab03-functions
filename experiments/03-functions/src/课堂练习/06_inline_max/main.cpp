#include <iostream>

namespace lesson {
inline int max(int x, int y) {
    return x > y ? x : y;
}
}

int main() {
    int a, b;
    std::cout << "Input two data: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input.\n";
        return 1;
    }
    std::cout << "The max is:" << lesson::max(a, b) << '\n';
    return 0;
}
