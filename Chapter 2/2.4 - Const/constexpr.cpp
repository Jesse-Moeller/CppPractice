#include <iostream>

int ten () {
    return 10;
}

int main() {
    constexpr int value = ten();
    return value;
}