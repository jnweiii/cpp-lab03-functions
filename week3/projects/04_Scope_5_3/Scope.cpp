#include "Scope.h"
#include <iostream>

int x = 5;
int y = 7;

void myFunction() {
    int y = 10;
    std::cout << "myFunction: x=" << x << ", y=" << y << '\n';
}
