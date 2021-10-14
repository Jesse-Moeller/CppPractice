#include <iostream>

int main() {
    int i = 42;
    decltype(i) g;
    // decltype((i)) h = 10; illegal for some reason
    decltype((i)) h = g;
}