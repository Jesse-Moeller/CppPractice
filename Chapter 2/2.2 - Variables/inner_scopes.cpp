#include <iostream>

int main() {
    std::string my_string("Hello, World!");
        {
            std::cout << my_string << std::endl;
            std::string my_string("Gloop bop");
            {
                std::cout << my_string << std::endl;
                std::string my_string("ping bum");
                {
                    std::cout << my_string << std::endl;
                }
                std::cout << my_string << std::endl;
            }
            std::cout << my_string << std::endl;
        }
    std::cout << my_string << std::endl;
    return 0;
}