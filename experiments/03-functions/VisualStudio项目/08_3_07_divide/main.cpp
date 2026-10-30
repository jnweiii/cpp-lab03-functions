#include <iostream>
#include <limits>

// 题目规定：除数为 0 时返回 -1，其他情况返回整数商。
short divide(unsigned short first, unsigned short second) {
    if (second == 0) {
        return -1;
    }
    return static_cast<short>(first / second);
}

int main() {
    unsigned long long firstInput, secondInput;
    std::cout << "Enter two unsigned short integers: ";
    if (!(std::cin >> firstInput >> secondInput)) {
        std::cout << "Invalid input.\n";
        return 1;
    }

    const unsigned int limit = std::numeric_limits<unsigned short>::max();
    if (firstInput > limit || secondInput > limit) {
        std::cout << "Input exceeds unsigned short range.\n";
        return 1;
    }

    unsigned short first = static_cast<unsigned short>(firstInput);
    unsigned short second = static_cast<unsigned short>(secondInput);
    // 返回类型为 short，若数学商超出范围，不能准确表示。
    if (second != 0 &&
        first / second > std::numeric_limits<short>::max()) {
        std::cout << "Quotient cannot be represented by short.\n";
        return 1;
    }
    short result = divide(first, second);
    std::cout << "Result: " << result << '\n';
    return 0;
}
