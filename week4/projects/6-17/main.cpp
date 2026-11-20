#include <iostream>

int main() {
    int value = 0;
    int* p = &value;  // 先让指针指向一个仍然存在的对象。
    *p = 9;

    std::cout << "the value at p: " << *p << '\n';
    return 0;
}
