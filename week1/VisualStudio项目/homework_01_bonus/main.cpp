#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double profit;
    std::cout << "Enter monthly profit (yuan): ";
    if (!(std::cin >> profit) || !std::isfinite(profit) || profit < 0) {
        std::cout << "Profit must be a non-negative number.\n";
        return 1;
    }

    // 各档只计算本档内的利润，不能把全部利润乘同一个比例。
    double bonus;
    if (profit <= 100000) {
        bonus = profit * 0.10;
    } else if (profit <= 200000) {
        bonus = 10000 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 17500 + (profit - 200000) * 0.05;
    } else if (profit <= 600000) {
        bonus = 27500 + (profit - 400000) * 0.03;
    } else if (profit <= 1000000) {
        bonus = 33500 + (profit - 600000) * 0.015;
    } else {
        bonus = 39500 + (profit - 1000000) * 0.01;
    }

    std::cout << std::fixed << std::setprecision(2)
              << "Bonus (yuan): " << bonus << '\n';
    return 0;
}
