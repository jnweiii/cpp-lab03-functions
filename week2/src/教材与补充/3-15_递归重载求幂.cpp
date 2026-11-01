#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>

int getPower(int x, int y) {
    if (y < 0) return 0;  // 按题目要求，整数版本负指数返回 0。
    if (y == 0) return 1;
    long long product = static_cast<long long>(getPower(x, y - 1)) * x;
    if (product < std::numeric_limits<int>::min() ||
        product > std::numeric_limits<int>::max()) {
        throw std::overflow_error("int result out of range");
    }
    return static_cast<int>(product);
}

double getPower(double x, int y) {
    if (y == 0) return 1.0;
    if (y < 0) return getPower(x, y + 1) / x;
    return getPower(x, y - 1) * x;
}

int main() {
    int a, exponent;
    double b;
    std::cout << "Enter integer a, real b and exponent m: ";
    if (!(std::cin >> a >> b >> exponent) || !std::isfinite(b)) {
        std::cout << "Invalid input.\n";
        return 1;
    }
    if (exponent < -30 || exponent > 30) {
        std::cout << "Use an exponent from -30 to 30 for this recursive demo.\n";
        return 1;
    }
    try {
        int result = getPower(a, exponent);
        std::cout << "Integer a^m: " << result << '\n';
    } catch (const std::overflow_error&) {
        std::cout << "Integer a^m: out of int range.\n";
    }

    // 转换 a 的类型，选中 double 版本，得到负指数的实数结果。
    if (a == 0 && exponent < 0) {
        std::cout << "Real a^m: undefined for zero to a negative power.\n";
    } else {
        double result = getPower(static_cast<double>(a), exponent);
        if (std::isfinite(result)) std::cout << "Real a^m: " << result << '\n';
        else std::cout << "Real a^m: out of double range.\n";
    }
    if (b == 0.0 && exponent < 0) {
        std::cout << "Real b^m: undefined for zero to a negative power.\n";
    } else {
        double result = getPower(b, exponent);
        if (std::isfinite(result)) std::cout << "Real b^m: " << result << '\n';
        else std::cout << "Real b^m: out of double range.\n";
    }
    // 本程序将 0 的 0 次方按演示约定处理为 1。
    return 0;
}
