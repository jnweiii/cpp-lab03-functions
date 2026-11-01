#include <cmath>
#include <iostream>

int main() {
    double scoreInput;
    std::cout << "Enter an integer score (0 to 10): ";
    if (!(std::cin >> scoreInput) || !std::isfinite(scoreInput) ||
        scoreInput < 0 || scoreInput > 10 ||
        scoreInput != std::trunc(scoreInput)) {
        std::cout << "Score must be an integer from 0 to 10.\n";
        return 1;
    }
    int score = static_cast<int>(scoreInput);

    // 从高分向低分判断，9、7、5 都包含在相应档内。
    std::cout << "你认为电影";
    if (score >= 9) {
        std::cout << "经典\n";
    } else if (score >= 7) {
        std::cout << "非常好\n";
    } else if (score >= 5) {
        std::cout << "一般\n";
    } else {
        std::cout << "烂片\n";
    }
    return 0;
}
