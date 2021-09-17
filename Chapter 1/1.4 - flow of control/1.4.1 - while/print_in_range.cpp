/*
Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.

Remark: The prompt does not say that we are allowed to ask the user to specify the smaller of the two, so I added my own function.
*/


#include <iostream>
int abs(int x) {
    if(x<0) {
        return (-1)*x;
    }
    else {
        return x;
    }
}

int main() {
    int a, b;
    std::cout << "First integer?";
    std::cin >> a;
    std::cout << "Second integer?";
    std::cin >> b;
    int min = ( (a + b) - abs(a - b) )/2;
    int max = ( (a + b) + abs(a - b) )/2;
    while(min <= max) {
        std::cout << min++ << std::endl;
    }
    return 0;
}