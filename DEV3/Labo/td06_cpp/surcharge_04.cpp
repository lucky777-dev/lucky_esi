/*!
 * \file surcharge_04.cpp
 * \brief surcharge de fonctions
 */
#include <iostream>

void f(int) {
    std::cout << "f(int)" << std::endl;
}

void f(unsigned) {
    std::cout << "f(unsigned)" << std::endl;
}

void f(long long) {
    std::cout << "f(long long)" << std::endl;
}

void f(double) {
    std::cout << "f(double)" << std::endl;
}

void f(long double) {
    std::cout << "f(long double)" << std::endl;
}

int main() {
    f(3);
    f(4.5);
    f(true);
    f(3LL);
    f('T');
    f(.3F);
    f(5U);
    short s {44};
    f(s);
    f(2e-2L);
}

