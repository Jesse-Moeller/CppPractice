#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    return
}

// First two lines are legal. The third line is not syntactically correct code. The fourth line is legal.