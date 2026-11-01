#include <iostream>

int main() {
    int val1 = 24, val2 = 5;
    double val3 = 24, val4 = 5;
    std::cout << "int/int, 24/5= " << val1 / val2 << '\n';
    std::cout << "int/int, 24%5= " << val1 % val2 << '\n';
    val2 = -5;
    std::cout << "int/int, 24%(-5)= " << val1 % val2 << '\n';
    std::cout << "double/double, 24/5= " << val3 / val4 << '\n';
    // 浮点数不能使用取余运算符 %。
    std::cout << "double/int, 24/5= " << val3 / val2 << '\n';
    std::cout << "int/double, 24/5= " << val1 / val4 << '\n';
    val1 = 5;
    std::cout << "val1 = " << val1 << '\n';
    std::cout << val1++ << ", ";
    std::cout << ++val1 << ", ";
    std::cout << val1-- << ", ";
    std::cout << --val1 << '\n';
    val1 = 5;
    std::cout << "val1 = " << val1 << '\n';
    // 本项目使用 C++17，运算符写法的 << 左操作数先于右操作数求值。
    std::cout << val1++ << ", " << ++val1 << ", " << val1-- << ", " << --val1 << '\n';
    return 0;
}
