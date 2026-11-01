#include <iostream>

int main() {
    int radius = 0;
    std::cout << "Please enter the radius!\n";
    if (!(std::cin >> radius)) return 1;
    std::cout << "The radius is:" << radius << '\n';
    std::cout << "PI is:" << 3.14 << '\n';
    std::cout << "Please enter a different radius!\n";
    if (!(std::cin >> radius)) return 1;
    std::cout << "Now the radius is changed to:" << radius << '\n';
    return 0;
}
