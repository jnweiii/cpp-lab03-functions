#include "Scope.h"
#include <iostream>

int main() {
    std::cout << "Before: x=" << x << ", y=" << y << '\n';
    myFunction();
    std::cout << "After: x=" << x << ", y=" << y << '\n';
    return 0;
}
