#include <iostream>

using namespace std;

int main() {
    string story, line;
    while (getline(cin, line)) {
        story += (line + "\n");
    }
    cout << story << endl;
}