#include "SimpleCircle.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>

int main() {
    SimpleCircle original(3);
    SimpleCircle copy(original);
    copy.setRadius(5);
    std::cout << "after copy: original=" << original.getRadius()
              << ", copy=" << copy.getRadius() << '\n';

    SimpleCircle assigned;
    std::cout << "default radius: " << assigned.getRadius() << '\n';
    assigned = original;
    original.setRadius(4);
    std::cout << "after assignment: original=" << original.getRadius()
              << ", assigned=" << assigned.getRadius() << '\n';
    assigned = assigned;
    std::cout << "after self-assignment: " << assigned.getRadius() << '\n';

    std::cout << std::fixed << std::setprecision(2)
              << "area at radius 4: " << original.area() << '\n';

    try {
        original.setRadius(-1);
    } catch (const std::invalid_argument& error) {
        std::cout << error.what() << "; radius=" << original.getRadius() << '\n';
    }
    return 0;
}
