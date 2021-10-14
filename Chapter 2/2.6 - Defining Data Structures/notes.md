# Defining Data Structures

A data structure is a way to group together related data and a strategy for using those data. For example, `Sales_item` groups `ISBN` and a count of how many copies of the book have been sold. Also gives functionality to `>>,<<, +` and `+=`. In `C++`, `string`, `istream` and `ostream` are classes.

## Defining Sales_data

Classes begin with keyword `struct`. Close curly should be followed by `;`. The semicolon marks the end of the list of declarators.

    struct Sales_data {
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
    };

The class body defines data members. We can supply an in-class initializer for data members. Upon object creation, in-class initializers will be used to initialize data members. Members without an initializer will be default initialized. In `C++` there's also the keyword `class` that can be used to define data structures.

## Header Files

Typically want to define classes and structs outside of functions. Headers usually contain `const`, `constexpr`, and `class` definitions.

## The Preprocessor

We rely on the preprocessor in order to include a header multiple times. The preprocessor is a program that runs before the compiler and changes the source text of our programs. For example, `#include` uses the precompiler. It replaces the line of text with everything in the specified header. The `#define` directive takes a name and defines it as a preprocessor variable. Then `#ifdef` can be used to check if a name has been defined as a preprocessor variable, `#ifndef` has the opposite value. Everything between `#if...` and `#endif` will be ignored if the former directive evaluates to false. For example:

    #ifndef SALES_DATA_H
    #define SALES_DATA_H
    #include <string>
    struct Sales_data {
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
    };
    #endif