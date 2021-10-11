#include <iostream>

int main() {
    int my_int;
    int *ptr1 = &my_int;
    int **ptr2 = &ptr1;

    my_int = 19;

    std::cout << *ptr1 << std::endl;
    int &ref = *ptr1;
    std::cout << ref << std::endl;
}