README about Variadic Functions
This document explains three important concepts in C programming:
1.  Variadic functions
2.  Macros for handling variable arguments (va_start, va_arg, va_end)
3.  The const type qualifier
These topics are essential for building flexible, safe, and maintainable C programs.
________________________________________
What Are Variadic Functions?
•   A variadic function is a function that accepts a variable number of arguments.
•   The most common example is the standard library function printf.
•   They are declared using an ellipsis (...) in the parameter list.
Example:
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list args;
    int total = 0;

    va_start(args, count); // Initialize argument list
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Retrieve next argument
    }
    va_end(args); // Clean up
    return total;
}

int main() {
    printf("Sum: %d\n", sum(3, 10, 20, 30)); // Output: 60
    return 0;
}
________________________________________
How to Use va_start, va_arg, and va_end
These macros are defined in <stdarg.h> and allow access to the variable arguments.
•   va_start(list, param)
o   Initializes the va_list object.
o   param is the last fixed parameter before the ellipsis.
•   va_arg(list, type)
o   Retrieves the next argument from the list.
o   You must specify the type of the argument.
•   va_end(list)
o   Cleans up the va_list object.
o   Always call this before the function returns.
Key Notes:
•   Arguments are accessed in the order they are passed.
•   The programmer must know the expected types and number of arguments.
________________________________________
Why and How to Use the const Type Qualifier
•   The const qualifier indicates that a variable’s value cannot be modified after initialization.
•   It improves code safety, readability, and allows the compiler to perform optimizations.
Examples:
const int MAX_USERS = 100; // Prevents accidental modification

void print_message(const char *msg) {
    // msg cannot be altered inside this function
    printf("%s\n", msg);
}
Benefits of const:
•   Prevents accidental changes to data.
•   Makes function contracts clearer (e.g., parameters are read-only).
•   Enables compiler optimizations.
•   Helps catch bugs at compile time.
________________________________________
Summary
•   Variadic functions allow flexible argument handling.
•   Macros (va_start, va_arg, va_end) provide controlled access to variable arguments.
•   const qualifier enforces immutability, improves safety, and clarifies intent.

