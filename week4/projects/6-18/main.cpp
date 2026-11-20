#include <iostream>

int fn1() {
    int* p = new int(5);
    int value = *p;  // 返回整数副本，先保存数值再释放内存。
    delete p;
    return value;
}

int main() {
    int a = fn1();
    std::cout << "the value of a is: " << a << '\n';
    return 0;
}
