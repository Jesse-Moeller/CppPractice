#include <iostream>

using namespace std;

int main () {
    string str1("Hello, world!");
    for (char &c : str1) {
        if (ispunct(c))
            c = ' ';
    }
    cout << str1;
    return 0;
}