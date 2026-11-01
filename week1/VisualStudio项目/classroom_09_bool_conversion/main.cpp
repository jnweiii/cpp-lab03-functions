#include <iostream>

int main() {
    bool bV1 = true, bV2 = false;
    std::cout << "bool value bV1 = " << bV1 << '\n';
    std::cout << "bool value bV2 = " << bV2 << '\n';
    int nV1 = bV1, nV2 = 0;
    bV1 = nV2;
    std::cout << "int value nV1 = " << nV1 << '\n';
    std::cout << "bool value bV1 = " << bV1 << '\n';
    return 0;
}
