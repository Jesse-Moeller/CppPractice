#include <iostream>

using namespace std;

int main() {
    string story, word;
    while (cin >> word) {
        if (word[-1] == '\n') {
            return 0;
        }
        story += (word + " ");
    }
    cout << story << endl;
}