#include <iostream>

int main()
{
    int values[] = {1, 2, 3};
    int* first = &values[0];
    double measurement = 0.0;
    double* measured = &measurement;

    std::cout << "Initial array: " << values[0] << ' ' << values[1]
              << ' ' << values[2] << '\n';
    *measured = 5.0;
    std::cout << "After writing the double: " << values[0] << ' '
              << values[1] << ' ' << values[2] << '\n';
    *first = 5;
    std::cout << "After writing the first int: " << values[0] << ' '
              << values[1] << ' ' << values[2] << '\n';
    std::cout << "Separate double: " << measurement << '\n';
    return 0;
}
