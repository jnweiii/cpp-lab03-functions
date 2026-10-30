#include <iostream>

namespace lesson {
int abs(int x) { return x > 0 ? x : -x; }
double abs(double x) { return x > 0 ? x : -x; }
long abs(long x) { return x > 0 ? x : -x; }
}

int main() {
    int x1 = 4;
    double x2 = 5.5;
    long x3 = 6L;
    std::cout << "|x1|=" << lesson::abs(x1) << '\n';
    std::cout << "|x2|=" << lesson::abs(x2) << '\n';
    std::cout << "|x3|=" << lesson::abs(x3) << '\n';
    return 0;
}
