#include <iostream>

int main() {
    std::cout << "9 x 9 multiplication table\n";
    for (int row = 1; row <= 9; ++row) {
        for (int column = 1; column <= row; ++column) {
            std::cout << column << '*' << row << '=' << column * row;
            if (column < row) std::cout << '\t';
        }
        std::cout << '\n';
    }
    return 0;
}
