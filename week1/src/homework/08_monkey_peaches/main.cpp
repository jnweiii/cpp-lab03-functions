#include <iostream>

int main() {
    int peaches = 1;  // 第10天早上剩下1个。
    std::cout << "Day 10: " << peaches << '\n';
    for (int day = 9; day >= 1; --day) {
        // 前一天的数量减半再少1个，才得到今天的数量。
        peaches = (peaches + 1) * 2;
        std::cout << "Day " << day << ": " << peaches << '\n';
    }
    std::cout << "Peaches on day 1: " << peaches << '\n';
    return 0;
}
