this is C - Variables, if, else, while
// ...existing code...
# C Quick Start

Read "Everything you need to know to start with C.pdf" fully before coding. You do not need to master everything immediately, but make sure you understand these slides in particular: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, and “while loops”.

## What to focus on (short cheat-sheet)

- Keywords and identifiers  
  - Keywords: reserved words (e.g., `int`, `if`, `while`).  
  - Identifiers: your names for variables/functions; must start with a letter or underscore, then letters, digits, or underscores.

- Integers  
  - Signed and unsigned integer types: `char`, `short`, `int`, `long`, `long long`.  
  - Use `sizeof` to check sizes (example in [hello_world/6-size.c](hello_world/6-size.c)).

- Arithmetic Operators in C  
  - `+`, `-`, `*`, `/`, `%` (modulo).  
  - Operator precedence applies; e.g. $a + b \times c$ means $a + (b \times c)$.

- Variables assignments  
  - Declaration then assignment: `int x; x = 5;` or `int x = 5;`.

- Relational operators  
  - `==`, `!=`, `<`, `>`, `<=`, `>=` return boolean-like int (0 or 1).

- Logical operators  
  - `&&` (and), `||` (or), `!` (not). Combine comparisons: `(a > b) && (c != 0)`.

- If statements in C / if…else statement  
  - Single branch:
    ```c
    if (x > 0)
        printf("positive\n");
    ```
  - Two-way:
    ```c
    if (x > 0)
        printf("pos\n");
    else
        printf("non-pos\n");
    ```

- While loop in C  
  - Repeats while condition is true:
    ```c
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
    ```

## Quick tips
- Add comments (`/* ... */` or `// ...`) to explain intent.  
- Compile frequently: fix one error at a time.  
- Use small programs to test each concept (see [hello_world/5-printf.c](hello_world/5-printf.c) for a minimal `main`).  
- When printing sizes, prefer `%zu` for `sizeof` results (see [hello_world/6-size.c](hello_world/6-size.c)).

## Useful examples in this repo
- [`main`](hello_world/5-printf.c) — simple program that prints a string.  
- [`main`](hello_world/6-size.c) — shows `sizeof` usage.  
- [`_putchar`](_putchar.c) — simple write wrapper.  
- [`main`](0-isupper.c) — examples related to character checks (fix syntax before use).

