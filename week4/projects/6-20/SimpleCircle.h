#pragma once

class SimpleCircle {
public:
    explicit SimpleCircle(int radius = 0);
    SimpleCircle(const SimpleCircle& other);
    SimpleCircle& operator=(const SimpleCircle& other);
    ~SimpleCircle();

    int getRadius() const;
    void setRadius(int radius);
    double area() const;

private:
    int* itsRadius;
};
