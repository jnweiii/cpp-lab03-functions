#include <iostream>

int main() {
    int isample = 0, osample = 0, hsample = 0;
    std::cin >> isample >> std::oct >> osample >> std::hex >> hsample;
    if (!std::cin) return 1;
    std::cout << isample << ';' << std::oct << osample << ';'
              << std::hex << hsample << '\n';
    isample = 123;
    osample = 0173;
    hsample = 0x7B;
    unsigned long ulsample = 4294967295UL;
    std::cout << std::dec << isample << ';' << std::oct << isample << ';' << std::hex << isample << '\n';
    std::cout << std::dec << osample << ';' << std::oct << osample << ';' << std::hex << osample << '\n';
    std::cout << std::dec << hsample << ';' << std::oct << hsample << ';' << std::hex << hsample << '\n';
    std::cout << std::dec << ulsample << ';' << std::oct << ulsample << ';' << std::hex << ulsample << '\n';
    return 0;
}
