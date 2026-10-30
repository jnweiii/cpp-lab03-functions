#include <iostream>

int Add(int x, int y) { return x + y; }
int Add(int x, int y, int z) { return x + y + z; }

int main() {
    int a = 3, b = 4, c = 5;
    std::cout << a << "+" << b << "=" << Add(a, b) << '\n';
    std::cout << a << "+" << b << "+" << c << "=" << Add(a, b, c) << '\n';
    return 0;
}
