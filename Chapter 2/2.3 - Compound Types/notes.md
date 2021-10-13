# Compound Types

Any type defined in terms of another type is compound.

More generally, a declaration is a base type followed by a list of declarators. Each declarator names a variable and gives the variable a type that is related to the base type. 

## References

A reference defines an alternative name for an object. A reference itself is NOT and object and is defined by using the declarator &othername.

`int my_int;`

`int &ref_int = my_int;`

References must be initialized and cannot be rebound. They are simply aliases which refer to the same object.

With one exception, the type of a reference and the object to which it refers must match exactly.

## Pointers

A pointer holds the address of another object. Pointers are declared with the * preceding the pointer name. To get the address of an object, use & in front of its name.

`int my_int;`

`int *int_ptr = &my_int;` 

In general, if `foo` points to `bar` and `bar` has type `zip`, then the declaration should be

`zip *foo = &bar;`

Pointers can have one of four states:
 1. Points to (the front of) an object
 2. Points to end of an object
 3. Points to nothing (null pointer)
 4. Invalid (anything else)

When a pointer points to an object, the pointer can be dereferenced using *. 

`int true_int, *int_ptr, &int_ref;`

is a valid declaration of three types. 

Pointers should be initialized right when they are used in order to improve readability. We can initialize pointers with nullptr

`int *ptr_var = nullptr`

`nullptr` is a literal that has a special type that can be converted to any other pointer type.

### Pointers vs. References

Both are compound types. Pointers are objects, but references are not. Pointers use the declarator *ptr and references use &ref. Pointers hold addresses, references are just aliases. You can have a reference to a pointer, but a pointer cannot point to a reference.