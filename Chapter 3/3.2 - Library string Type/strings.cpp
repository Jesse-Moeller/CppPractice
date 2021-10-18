#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string foo, blop;
    // Prints entire line of standard input
    getline(cin, foo);
    cout << foo << endl;
    // Prints one word of standard input.
    cin >> foo;
    cout << foo << endl;
    // empty really means empty
    string newline = "\n";
    cout << newline.empty() << endl;
    cout << newline.size() << endl;

    string phrase = "This is a longer than usual phrase. I have"
                    "decided to make a longer string just to see"
                    "what all the fuss is about.";
    cout << phrase.size() << endl;
    cout << (phrase.size() < -2) << endl;
    return 0;
}