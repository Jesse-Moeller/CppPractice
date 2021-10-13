#include <iostream>

int main() {
    auto z = 0., *p = &z;

    const int i = 10;
    const int *const pi = &i;
    auto x = pi;
}