# Library vector Type

A vector is an indexed *container* of objects that all have the same type.

    #include <vector>
    using std::vector;

A vector is a class template. Templates are *not* themselves functions or classes. They can be thought of as instructions to the compiler. When the compiler creates functions or classes from a template, that's called *instantiation*. When using a template, we specify the class we wish to instantiate by supplying it in a pair of angle brackets. For instance:

    vector<int> ivec;
    vector<Sales_item> Sales_vec;
    vector<vector<string>> file;

## Initialization

List initialization
    vector<int> ivec = {1,4,9,27};
Copy initialization
    vector<int> ivec2 = ivec;
    vector<int> ivec3(ivec);
Default initialization;
    vector<int> ivec4;

When we use parenthesis, that invokes some constructor. When we use curly braces, we are indicating that we want to initialize with a list of values.

    vector<T>(n, val);
    vector<T>(n);

If it is not possible to initialize using the curly braces, other interpretations will be attempted.

## Adding Elements

Vectors grow efficiently. It is not necessary to specify the lengths.

    vector<int> ivec;
    for (int i = 0; i <100; i++)    {
        ivec.push_back(i);
    }

The body of a range for must not change the squence over which it is iterating.