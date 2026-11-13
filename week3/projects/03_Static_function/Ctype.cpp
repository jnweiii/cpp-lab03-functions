#include "Ctype.h"
#include <iostream>

int Ctype::s = 0;

Ctype::Ctype(int x) : a(x) {
    ++s;
    std::cout << "constructor: a=" << ++a << '\n';
}

void Ctype::Print() {
    std::cout << "Print: s=" << ++s << '\n';
}
