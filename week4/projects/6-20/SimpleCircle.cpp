#include "SimpleCircle.h"
#include <stdexcept>

namespace {
void checkRadius(int radius) {
    if (radius < 0) {
        throw std::invalid_argument("radius must be nonnegative");
    }
}
}

SimpleCircle::SimpleCircle(int radius) : itsRadius(nullptr) {
    checkRadius(radius);
    itsRadius = new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle& other)
    : itsRadius(new int(*other.itsRadius)) {}

SimpleCircle& SimpleCircle::operator=(const SimpleCircle& other) {
    if (this != &other) {
        *itsRadius = *other.itsRadius;  // 两个对象各自保留原有的存储空间。
    }
    return *this;
}

SimpleCircle::~SimpleCircle() {
    delete itsRadius;
}

int SimpleCircle::getRadius() const {
    return *itsRadius;
}

void SimpleCircle::setRadius(int radius) {
    checkRadius(radius);
    *itsRadius = radius;
}

double SimpleCircle::area() const {
    constexpr double pi = 3.141592653589793;
    return pi * (*itsRadius) * (*itsRadius);
}
