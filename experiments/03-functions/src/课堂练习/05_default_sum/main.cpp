#include <iostream>

void sum(int num = 10) {
    int result = 0;
    for (int i = 1; i <= num; ++i) {
        result += i;
    }
    std::cout << "sum is:" << result << '\n';
}

int main() {
    sum(100);
    sum();
    return 0;
}
