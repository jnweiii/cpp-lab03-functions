#pragma once

class X;
void h(X* object);

class Y {
public:
    void g(X* object);
};

class Z {
public:
    void f(X* object);
};

class X {
    int i;
public:
    X(int value = 0) : i(value) {}
    int getI() const { return i; }
    friend void Y::g(X* object);
    friend class Z;
    friend void h(X* object);
};

inline void Y::g(X* object) {
    object->i += 1;
}

inline void Z::f(X* object) {
    object->i += 5;
}

inline void h(X* object) {
    object->i += 10;
}
