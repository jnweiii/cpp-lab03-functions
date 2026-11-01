#include <iostream>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter n (1 to 30): ";
    if (!(std::cin >> n) || n < 1 || n > 30) {
        std::cout << "n must be between 1 and 30.\n";
        return 1;
    }
    // 限制 n 避免朴素递归产生过长的运行时间。
    std::cout << "Series: ";
    for (int index = 1; index <= n; ++index) {
        if (index > 1) std::cout << ' ';
        std::cout << fibonacci(index);
    }
    std::cout << '\n';
    std::cout << "F(" << n << ") = " << fibonacci(n) << '\n';
    return 0;
}
