#include <iostream>

int main() {
    const double pi = 3.14159;
    int radius = 0;
    std::cout << "Please enter the radius!\n";
    if (!(std::cin >> radius)) return 1;
    std::cout << "The radius is:" << radius << '\n';
    std::cout << "PI is:" << pi << '\n';
    std::cout << "Please enter a different radius!\n";
    if (!(std::cin >> radius)) return 1;
    std::cout << "Now the radius is changed to:" << radius << '\n';
    std::cout << "PI is still:" << pi << '\n';
    return 0;
}
