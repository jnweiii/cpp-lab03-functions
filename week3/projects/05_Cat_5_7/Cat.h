#pragma once

class Cat {
    static int numOfCats;
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other) = default;
    ~Cat();
    static int getNumOfCats();
};
