#include <iostream>

inline double Circle(double r) {
    return 3.1416 * r * r;
}

int main() {
    for (int i = 1; i <= 3; ++i) {
        std::cout << "r=" << i << " area=" << Circle(i) << '\n';
    }
    return 0;
}
