#include <iostream>

int main() {
    int my_int = 10;
    int &ref_int = my_int;
    ref_int++;
    std::cout << my_int << std::endl;
    std:: cout << &my_int << std::endl << &ref_int << std::endl;
    return 0;
}