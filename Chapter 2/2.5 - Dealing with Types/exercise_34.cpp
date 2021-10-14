#include <iostream>

int main () {
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    a = 42;
    b = 42;
    c = 42;
    // d = 42; this is a pointer
    // e = 42; this is also a pointer
    // g = 42; g is a reference to a const int, cannot be modified

    return 0;
}