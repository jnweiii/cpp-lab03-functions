#include <iostream>

namespace lesson {
int myabs(int x) { return x > 0 ? x : -x; }
double myabs(double x) { return x > 0 ? x : -x; }
long myabs(long x) { return x > 0 ? x : -x; }
}

int main() {
    int x1 = 4;
    double x2 = 5.5;
    long x3 = 6L;
    std::cout << "|x1|=" << lesson::myabs(x1) << '\n';
    std::cout << "|x2|=" << lesson::myabs(x2) << '\n';
    std::cout << "|x3|=" << lesson::myabs(x3) << '\n';
    return 0;
}
