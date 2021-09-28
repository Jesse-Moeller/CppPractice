#include <iostream>

int main() {
    bool my_bool = false;
    std::cout << "bool size:" << sizeof(my_bool) << std::endl;
    char my_char = 'f';
    std::cout << "char size:" << sizeof(my_char)<< std::endl;
    short my_short = 1;
    while (my_short > 0) {
        if (my_short + 1 < 0) {
            break;
        }
        my_short++;
    }
    std::cout << "max short value " << my_short << std::endl;
    std::cout << "short size:" << sizeof(my_short)<< std::endl;
    int my_int;
    std::cout << "int size:" << sizeof(my_int)<< std::endl;
    long my_long;
    std::cout << "long size:" << sizeof(my_long)<< std::endl;
    long long my_long_long;
    std::cout << "long long size:" << sizeof(my_long_long)<< std::endl;
    float my_float;
    std::cout << "float size:" << sizeof(my_float)<< std::endl;
    double my_double;
    std::cout << "double size:" << sizeof(my_double)<< std::endl;
    long double my_long_double;
    std::cout << "long double size:" << sizeof(my_long_double)<< std::endl;
    return 0;
}