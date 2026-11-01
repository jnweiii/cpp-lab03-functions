#include <iostream>

int main() {
    int ival1 = 1, ival2 = 2;
    double fval = 0.0;
    char cval = '\0';
    std::cout << "ival1= " << ival1 << '\n';
    std::cout << "ival2= " << ival2 << '\n';
    ival1 = ival2 = 0;
    ival1 = fval = 0;
    ival1 = cval = 'a';
    std::cout << "ival1= " << ival1 << '\n';
    std::cout << "ival2= " << ival2 << '\n';
    std::cout << "fval= " << fval << '\n';
    std::cout << "cval= " << cval << '\n';
    int ival3 = fval = 8;
    std::cout << "ival3= " << ival3 << '\n';
    std::cout << "fval= " << fval << '\n';
    std::cout << "ival1 = " << ival1 << ", ival2 = " << ival2 << '\n';
    ival2 = -ival1++;  // 解析为 -(ival1++)：先取旧值，再递增。
    std::cout << "ival2 = -ival1++, ival1= " << ival1 << ", ival2 = " << ival2 << '\n';
    ival1 = ++ival2 + ival1;
    std::cout << "ival1 = ++ival2+ival1, ival1= " << ival1 << '\n';
    return 0;
}
