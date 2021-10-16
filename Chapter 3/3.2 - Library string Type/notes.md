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
`is >> s` writes