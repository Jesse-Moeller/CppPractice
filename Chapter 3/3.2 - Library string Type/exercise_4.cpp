#include <iostream>

using namespace std;

template <class T>
void compare_val(T val1, T val2) {
    if (val1 == val2) {
        cout << "the compared values are equal" << endl;
    }
    else if (val1 < val2) {
        cout << "first value < second value" << endl;
    }
    else {
        cout << "second value is < first value" << endl;
    }
}

int main() {
    string str1, str2, response;
    cin >> str1 >> str2;
    cout << "Would you like to compare based on order? (y/n)" << endl;
    while (cin >> response) {
        if (response == "y") {
            compare_val(str1, str2);
            return 0;
        }
        else if (response == "n") {
            compare_val(str1.size(), str2.size());
            return 0;
        }
    }
}