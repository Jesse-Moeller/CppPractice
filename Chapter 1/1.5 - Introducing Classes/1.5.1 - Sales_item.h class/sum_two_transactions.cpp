#include <iostream>
#include "..\..\headers\Sales_item.h"

int main() {
    Sales_item my_sales_item_a;
    Sales_item my_sales_item_b;
    std::cout << "Input first sales item:" << std::endl;
        std::cin >> my_sales_item_a;
    std::cout << "Input second sales item:" << std::endl;
        std::cin >> my_sales_item_b;
    if (my_sales_item_a.isbn() != my_sales_item_b.isbn()) {
        std::cout << "Error, ISBNs do not match." << std::endl;
        return -1;
    }
    else {
        std::cout << my_sales_item_a + my_sales_item_b;
        return 0;
    }
}