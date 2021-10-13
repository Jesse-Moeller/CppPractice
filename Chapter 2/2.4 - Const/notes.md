# Const

Const gives us a way to store a value that cannot be changed in a variable.

`const speed_of_light = 12E6`

Similar to references, `const` variables must be initialized. If you want to share a const across multiple files at compile time, you need to initialize and declare the variable with `extern`

## References to Const

References to `const` types also must be `const`. Such references are sometines called "`const` references". A const reference can be bound to a nonconst object, a literal, or a more general expression.

`int var = 10;`

`const int &constvar = var * 10;`

The compiler has a way of evaluating the expression and binding it to the const ref.

## Pointers to Const

A pointer to const may not be used to change the object to which the pointer points.

`const double pi = 3.14;`

`double *ptr = &pi;` illegal

`const double *cptr = &pi;` there we go

`*cptr = 10;` this is illegal

Like references to const, pointers to const say nothing about the object to which the pointer points. The specification as const simply places restrictions on how we can interact with the referenced value.

`int my_int = 10;`
`int *const ptr = &my_int;`

`ptr` is a `const` pointer, the value of `ptr` cannot be changed. However, it points to an `int` which can be changed. On the other hand,

`const double e = 2.71;`

`const double *const dptr = &e;`

`dptr` is a `const` pointer to a `const` `double`. So we cannot change the value of `ptr` nor can we change `*ptr`.

## Top-Level Const

"top-level const" means that the pointer itself is const. When a pointer can point to a const, its a "low-level const". Pointer types, unlike most other types, can have to both top-level const and low-level const.

The distinction matters when we copy an object. Top-level const is ignored, low-level const is preserved.

## Constexpr

`const int max_files = 20;` is a constexpr

`const int limit  = max_files + 1;` is a constexpr

`const int sz = get_size();` is *not* a constexpr, because value is not known until compile time (unless `get_size()` is a `constexpr` function...)

In C++11 we can use `constexpr` in a declaration to ask the compiler to check if the variable is const.

## Literal Types

A `constexpr` declaration must be made with a literal type. Arithmetic, reference, and pointer types are literal types.


## Pointers and constexpr

The `constexpr` applies top-level const on the object it defines.