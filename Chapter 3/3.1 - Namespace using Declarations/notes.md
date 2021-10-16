# Namespace using Declarations

Some basic and important library types are `string` and `vector`. Associated with these types are companion types called iterators. Iterators are used to access the elements of the array. String and vetor are applications of the more primitive built-in `array` type.

You don't always have to type `std::cin`. You can place `using std::cin` at the top of a file and this will allow you to use `cin` without `::`.

    #include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;
    int main () {
        std::string input;
        cin >> input;
        cout << input << endl;
        return 0;
    }

You should not place `using` inside of headers.