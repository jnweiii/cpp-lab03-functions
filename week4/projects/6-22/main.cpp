#include <cstddef>
#include <iostream>
#include <string>
#include <utility>

using std::string;

// 每次交换首尾两个字符，再处理它们之间的部分。
void reverseRange(string& s, std::size_t left, std::size_t right) {
    if (left >= right) {
        return;
    }
    std::swap(s[left], s[right]);
    reverseRange(s, left + 1, right - 1);
}

void reverse(string& s) {
    if (!s.empty()) {
        reverseRange(s, 0, s.size() - 1);
    }
}

int main() {
    string s;
    if (!std::getline(std::cin, s)) {
        return 1;
    }
    reverse(s);
    std::cout << "Reversed: " << s << '\n';
    return 0;
}
