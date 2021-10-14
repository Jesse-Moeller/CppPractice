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

The variable `x` is a pointer to a `const int`. This means that the value of `x` can change, but we can never assign to `*x`.

## Decltype

We can use `declype(<expression>)` to make the compiler return the type of the operand. If the operand is a variabel, top-level const is kept.

`const int ci = 0, &cj = ci;`
`decltype(ci) x = 0;`
`decltype(cj) y = x;` y is a reference and is bound to x
`decltype(cj) z;` error, referencces must be initialized

### More decltype reference wierdness

Let

`int i = 10;`

Then `decltype(i)` is `int`, but `decltype((i))` is `int&`. Apparently, `decltype((variable))` is *always* a reference type. 

Assignment is an expression that yields a reference type. The type is a reference to the type of LHS. For instance, 

`int a = 3, b = 4;`
`decltype(a) c = a;`
`decltype(a = b) d = a;`

Obviously `a` and `b` are `int`s, `c` is also an `int`, but `d` is `&int` and is bound to `a`.