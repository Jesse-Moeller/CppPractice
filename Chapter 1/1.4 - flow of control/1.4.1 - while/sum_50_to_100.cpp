#include <iostream>
int main(){
    int sum = 50, val = 51;
    while(val<=100){
        sum += val;
        ++val;
    }
    std::cout << "The sum from 50 to 100 inclusive is " << sum << std::endl;
}