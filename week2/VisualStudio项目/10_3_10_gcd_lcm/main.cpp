#include <iostream>

long long greatestCommonDivisor(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

long long leastCommonMultiple(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    return (a / greatestCommonDivisor(a, b)) * b;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input.\n";
        return 1;
    }
    // 两个输入均为 int，计算时转为 long long，避免负数取绝对值溢出。
    long long gcd = greatestCommonDivisor(a, b);
    long long lcm = leastCommonMultiple(a, b);
    std::cout << "GCD: " << gcd << '\n';
    std::cout << "LCM: " << lcm << '\n';
    if (a == 0 && b == 0) {
        std::cout << "Convention: gcd(0, 0) and lcm(0, 0) are shown as 0.\n";
    }
    return 0;
}
