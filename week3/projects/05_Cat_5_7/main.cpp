#include "Cat.h"
#include <iostream>

int main() {
    std::cout << "Initially: " << Cat::getNumOfCats() << '\n';
    {
        Cat first;
        std::cout << "One object: " << Cat::getNumOfCats() << '\n';
        {
            Cat second;
            std::cout << "Two objects: " << Cat::getNumOfCats() << '\n';
            Cat third(first);
            std::cout << "After copy: " << Cat::getNumOfCats() << '\n';
            second = first;
            std::cout << "After assignment: " << Cat::getNumOfCats() << '\n';
        }
        std::cout << "Inner scope ended: " << Cat::getNumOfCats() << '\n';
    }
    std::cout << "All scopes ended: " << Cat::getNumOfCats() << '\n';
    return 0;
}
