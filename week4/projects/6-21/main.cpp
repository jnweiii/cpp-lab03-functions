#include <cstddef>
#include <iostream>
#include <string>

std::size_t countLetters(const std::string& sentence) {
    std::size_t count = 0;
    for (char ch : sentence) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string sentence;
    if (!std::getline(std::cin, sentence)) {
        return 1;
    }
    std::cout << "Letters: " << countLetters(sentence) << '\n';
    return 0;
}
