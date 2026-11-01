#include <iostream>

int main() {
    unsigned short j = 50000;
    short i = static_cast<short>(j);
    std::cout << "Short int is:" << i << '\n';
    std::cout << "Short unsigned int is: " << j << '\n';
    return 0;
}
