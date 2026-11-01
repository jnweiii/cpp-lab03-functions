#include <iostream>

int main() {
    const float piFloat = 3.1415926f;
    const double piDouble = 3.1415926;
    const long double piLongDouble = 3.1415926L;
    float radiusFloat = 5.5f;
    double radiusDouble = 5.5;
    long double radiusLongDouble = 5.5L;
    float areaFloat = piFloat * radiusFloat * radiusFloat;
    double areaDouble = piDouble * radiusDouble * radiusDouble;
    long double areaLongDouble = piLongDouble * radiusLongDouble * radiusLongDouble;
    std::cout << "nAreaFloat = " << areaFloat << " , sizeof(nAreaFloat) = " << sizeof(areaFloat) << '\n';
    std::cout << "nAreaDouble = " << areaDouble << " , sizeof(nAreaDouble) = " << sizeof(areaDouble) << '\n';
    std::cout << "nAreaLDouble = " << areaLongDouble << " , sizeof(nAreaLDouble) = " << sizeof(areaLongDouble) << '\n';
    return 0;
}
