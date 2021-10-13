# Dealing with Types

Sometimes it's difficult to specify a variable of the correct type. Pointers that are low-level and top-level const are a first example (in my opinion).

## Type Aliases

`typedef double wages;`

Is a way to alias double as wages. C++11 introduces also

`using SI = Sales_item;`

Declaratons using aliases can get complicated.

`typedef char *pstring;`

This declares that `pstring` is an alias for `char*`. So `pstring` is a pointer to `char`.

`const pstring cstr = 0;`

Here `cstr` is a const `pstring`.

`const pstring *ps;`

Here, `ps` is a pointer to a `const pstring`.

## Auto

Specifying `auto` allows the compiler to deduce the type from the compiler.

`auto item = val1 + val2;`

If `val1` and `val2` are of type Sales_item, then `item` will also be `Sales_item`. Same for any other type that has redefined `+`. When declaring multiple variables, the implied types from the initializations must match.

`auto sz = 0, pi = 3.14;`

is illegal. Top-level const is ignored by `auto`, but it will pick up low-level const.

`const int i = 10;`
`const int *const p = &i;`
`auto x = p;`