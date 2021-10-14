#include <iostream>

int main() {
    const int i = 42;
    // Nothing to say here, i is a const int
    auto j = i;
    // j will just be an int, top-level const is lost on assignment
    const auto &k = i;
    // Not sure what const does here, auto &k would give a reference to const
    // I don't think it does anything
    auto *p = &i;
    // p is a pointer to const int. It picks up low-level const from &i.
    const auto j2 = i, &k2 = i;
    // j2 is a const int, k2 is a reference to const int
}