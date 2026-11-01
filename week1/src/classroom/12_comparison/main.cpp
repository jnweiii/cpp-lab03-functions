#include <iostream>

int main() {
    int ival1 = 1, ival2 = 2, ival3 = 3, ival4 = 4;
    bool flag = (ival1 == ival2);
    std::cout << "Is 1 equal to 2?: " << flag << '\n';
    flag = (ival1 < ival2);
    std::cout << "Is 1 less than 2?: " << flag << '\n';
    flag = (ival1 < ival2 && ival3 < ival4);
    std::cout << "Is 1 less than 2 and 3 less than 4?: " << flag << '\n';
    return 0;
}
