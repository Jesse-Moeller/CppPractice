#include <iostream>

int main() {
    int var = 10;
    const int &constvar = var * 10;
    std::cout << constvar;
}