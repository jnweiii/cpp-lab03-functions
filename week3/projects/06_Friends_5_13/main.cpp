#include "Friends.h"
#include <iostream>

int main() {
    X object;
    Y y;
    Z z;
    std::cout << "Initial: " << object.getI() << '\n';
    y.g(&object);
    std::cout << "After Y::g: " << object.getI() << '\n';
    z.f(&object);
    std::cout << "After Z::f: " << object.getI() << '\n';
    h(&object);
    std::cout << "After h: " << object.getI() << '\n';
    return 0;
}
