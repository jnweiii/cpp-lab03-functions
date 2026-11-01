#include <iostream>
#include <limits>

int main() {
    int n, a;
    std::cout << "Enter n and a (1 <= n <= 18, 1 <= a <= 9): ";
    if (!(std::cin >> n >> a) || n < 1 || n > 18 || a < 1 || a > 9) {
        std::cout << "Use n from 1 to 18 and a digit a from 1 to 9.\n";
        return 1;
    }

    long long term = 0;
    long long sum = 0;
    const long long limit = std::numeric_limits<long long>::max();
    std::cout << "Series: ";
    for (int index = 1; index <= n; ++index) {
        // 在上一项末尾追加数字 a，得到下一项。
        if (term > (limit - a) / 10) {
            std::cout << "Value exceeds the integer range.\n";
            return 1;
        }
        term = term * 10 + a;
        if (sum > limit - term) {
            std::cout << "Sum exceeds the integer range.\n";
            return 1;
        }
        sum += term;
        if (index > 1) std::cout << " + ";
        std::cout << term;
    }
    std::cout << "\nSum: " << sum << '\n';
    return 0;
}
