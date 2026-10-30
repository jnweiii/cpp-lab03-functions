#include <iostream>

int main() {
    // 第 1 个月有一对。兔子长到第 3 个月开始繁殖。
    int previousPairs = 0;
    int currentPairs = 1;

    std::cout << "Month  Pairs  Rabbits\n";
    for (int month = 1; month <= 20; ++month) {
        std::cout << month << "      " << currentPairs
                  << "      " << currentPairs * 2 << '\n';
        int nextPairs = previousPairs + currentPairs;
        previousPairs = currentPairs;
        currentPairs = nextPairs;
    }
    return 0;
}
