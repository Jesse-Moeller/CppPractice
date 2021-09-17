#include <iostream>

int main() {
    int input = 0, currentVal = 0;
    if (std::cin >> currentVal) {
        int count = 1;
        while (std::cin >> input) {
            if (input == currentVal) {
                count++;
            }
            else {
                std::cout << currentVal << " occurs " << count << " times" << std::endl;
                currentVal = input;
                count = 1;
            }
        }
        std::cout << currentVal << " occurs " << count << " times" << std::endl;
    }
    return 0;
}