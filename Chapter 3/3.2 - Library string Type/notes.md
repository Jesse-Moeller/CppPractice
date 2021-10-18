# Library string Type

The `string` class is defined in the standard library. We can access `string` if we include

`#include <string>`
`using std::string;`

## Defining and Initializing strings

Classes can define several different initialization methods. Two initialization methods for a class differ in either the number or types of values used to initialize the class object. For instance, these are all valid string initializations:

    string s1;
    string s2 = s1;
    string s3 = "hiya";
    string s4(10, 'c');

When we initialize a variable with `=`, this is called a copy initialization. The last line above is an example of a direct initialization. Direct initialization is necessary when we need several variables for initialization.

## Operations on Strings

Classes allow us to define operations on strings as well.

`os << s` writes `s` to `os` and returns `os`.
`is >> s` writes `is` to `s` and returns `is`.

`getline(is,s)` reads a *line* of input from `is` into `s` and returns `is`.

`s.empty()` returns `true` if `s` is empty, otherwise returns `false`.

`s.size()` returns the number of characters in `s`.

`s[n]` returns a reference to the `char` at position `n` in `s`.

`<` and `>` make comparisons using the standard dictionary order

### Reading in strings

    int main() {
        string word;
        while (cin >> word) {
            cout << word << endl;
        }
        return 0;
    }

`(cin >> word)` evaluates to `false` when reaching EOF. Using `getline` allows us to read strings in a steam up to and including the first newline, and returns everything except that newline character. The `empty` function returns a bool telling us if a string is empty or not.

The `size` function returns a `string::size_type` value. This is an unsigned value that can store the length of any string. It can get pretty weird if you compare strings to other unsigned types. 

### Assignment and adding

Very easy to assign to strings.

`string st1(10,'c');` creates the string `cccccccccc`
`string st2;` creates an empty string
`st1 = st2` replaces contents of `st1` with `st2`, both are now empty

`st1 = "Hello, ", st2 = "World!\n";`
`st3 = st1 + st2;`

We can add two strings, or a string and a string literal, but we cannot add two string literals. That's because string literals are not actually `std::string`. For instance:

`string wont_work = "doh" + "darn";` is illegal

but

    string str1("doh");
    string str2 = str1 + "darn";

**Exercise 3:** `cin >> str1` will read in a consecutive sequence of non-whitespace characters. `getline(cin, line)` will read in all characters until a linebreak. The linebreak is consumed, but not returned to `line`.

## Dealing with characters in a string

There are several cases for needing to iterate through the characters of a string: casing, detecting whitespace, removing brackets or braces, etc.

#### random advice

all of the C library is included in the C++ library. For instance, `math.h` is a C library and its C++ counterpart is `cmath`. It's best to use the C++ versions when writing C++ code.


### range-based for
We can iterate through an object that represents a sequence using range-based for (or just "range for").

    for (auto c : str1) {
        cout << c << endl;
    }

will print all characters in the given string vertically.

### changing characters

    string s("Hello World!!!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;

This loop uses a reference to change the values. If we simply did 

    string s("Hello World!!!");
    for (auto c : s)
        c = toupper(c);
    cout << s << endl;

nothing about `s` would change.

### subscripting

subscript operator [] takes a `string::size_type` value. Subscript indexing starts at 0. We can access the last character with `str1[str1.size()-1]`. The library is not required to check the value of a subscript. 

### Random Access

    const string "0123456789ABCDEF";
    cout << "enter a series of numbers between 0 and 15"
         << "separated by spaces. hit ENTER when finished: "
         << endl;
    string result;
    string::size_type n;
    while (cin >> n) {
        if (n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;