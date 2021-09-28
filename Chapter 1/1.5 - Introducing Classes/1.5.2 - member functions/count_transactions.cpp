#include <iostream>
#include "..\..\headers\Sales_item.h"

int main() {
    Sales_item current_sales_item, input_sales_item;
    if (std::cin >> current_sales_item) {
        int count = 1;
        while (std::cin >> input_sales_item) {
            if (input_sales_item.isbn() == current_sales_item.isbn()) {
                count++;
            }
            else {
                std::cout  << " We have "<<  count << " many transactions for ISBN: " << current_sales_item.isbn() << std::endl;
                current_sales_item = input_sales_item;
                count = 1;
            }
        }
        std::cout  << " We have "<<  count << " many transactions for ISBN: " << current_sales_item.isbn() << std::endl;
    }
    return 0;
}