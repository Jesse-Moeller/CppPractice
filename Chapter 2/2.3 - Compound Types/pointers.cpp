#include <iostream>

int main() {
    int my_int;
    int *ptr1 = &my_int;
    int **ptr2 = &ptr1;

    my_int = 19;

    std::cout << *ptr1 << std::endl;
    int &ref = *ptr1;
    std::cout << ref << std::endl;

    int *zero_ptr = 0;
    std::cout << zero_ptr << std::endl;
    zero_ptr = nullptr;
    std::cout << zero_ptr << std::endl;
}