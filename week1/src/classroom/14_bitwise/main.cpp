#include <bitset>
#include <iostream>

int main() {
    std::cout << "~15 = " << (~15) << '\n';
    std::cout << "15 & 21 = " << (15 & 21) << '\n';
    std::cout << "15 ^ 21 = " << (15 ^ 21) << '\n';
    std::cout << "15 | 21 = " << (15 | 21) << '\n';
    unsigned int test = 9;
    std::cout << "nTest = " << test << '\n';
    test |= 1u << 4;
    std::cout << "After set the position 4 to 1, nTest = " << test << '\n';
    test &= ~(1u << 4);
    std::cout << "After set the position 4 to 0, nTest = " << test << '\n';
    for (int i = 0; i < 16; ++i) {
        bool bitIsOne = (test & (1u << i)) != 0;
        if (bitIsOne) test &= ~(1u << i);
        else test |= 1u << i;
    }
    std::cout << "After flip, nTest = " << test << '\n';
    std::cout << "Low 16 bits: " << std::bitset<16>(test) << '\n';
    return 0;
}
