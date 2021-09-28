#include <iostream>
#include "..\..\headers\Sales_item.h"

int main() {
    Sales_item read_sales_item, sum_sales_item;
    std::string common_isbn;
    std::cout << "Input sales items with common ISBN:" << std::endl;
    std::cin >> sum_sales_item;
    common_isbn = sum_sales_item.isbn();

    while(std::cin >> read_sales_item) {
        if (read_sales_item.isbn() != common_isbn) {
            std::cout << "Error, ISBNs do not match." << std::endl;
            return -1;
        }
        else {
            sum_sales_item += read_sales_item;
        }
    }
    std::cout << "total:" << sum_sales_item << std::endl;
}