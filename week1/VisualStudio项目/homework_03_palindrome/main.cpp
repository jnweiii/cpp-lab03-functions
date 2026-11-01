#include <iostream>

int main() {
    long long number;
    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid integer input.\n";
        return 1;
    }

    bool palindrome = false;
    if (number >= 0 && (number == 0 || number % 10 != 0)) {
        long long remaining = number;
        long long reversedHalf = 0;
        // 只反转后一半，避免反转整个大整数时溢出。
        while (remaining > reversedHalf) {
            reversedHalf = reversedHalf * 10 + remaining % 10;
            remaining /= 10;
        }
        // 奇数位时，反转部分最末的一位是中间数字。
        palindrome = remaining == reversedHalf ||
                     remaining == reversedHalf / 10;
    }

    std::cout << number << (palindrome ? " is a palindrome.\n"
                                      : " is not a palindrome.\n");
    return 0;
}
