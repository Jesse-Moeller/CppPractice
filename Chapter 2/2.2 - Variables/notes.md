# Variables

## Definitions

An "object" is a region of memory that has a type.

A simple variable definition consists of a type specifier followed by a list of one or more variable names separated by commas and ends with a semicolon. Definitions may optionally provide initial values.

## Initializers

Initialization is not the same as assignmnent.

`double salePrice = 10;`

An object that is initialized gets a value as it is being created. Assignment happens when an object's current value is replaced with a new one.

`salePrice = 20;`

### List Initialization

Several forms of initialization. Here's one way:

`int units_sold = 0;`

`int units_sold = {0};`

`int units_sold{0};`

It is an error to list initialize an object whose type is less precise than the initial value being assigned.

`int my_int = 1f;` is fine

`int my_int = {1f};` is an error

### Default Initialization

It is an error to use an object of built-in type that is not initialized. Classes explicitly control how they are initialized. It is worth the effort to initialize objects of built-in type.

## Declaration

We need a way to share code between files. To support separate compilation, C++ distinguishes between declarations and definitions. 

Declarations make names known to the program; they specify the type and name of a variable.

To use a variable in more than one file requires declarations that are separate from the variable's definition. One source definition, followed by declarations intending to use the defined object.

`extern int i;`

Is a declaration but not a definition. This simply makes the compiler aware of `i` and its type.

## Identifiers

Begin identifiers with either a letter or an underscore. Identifiers are case-sensitive. Variable names are usually lowercase, classes should start with uppercase.

## Scope

Names declared outside main have global scope. Names at the global scope are accessible throughout the program. Names declared inside a block `{}` have inner scope and fall off outside of the block. The names of the outer scope are accessible in the inner scope.