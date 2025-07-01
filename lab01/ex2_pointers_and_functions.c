
#include <stdio.h>

// Function declarations
void add_one(int *input);
void add_one_pointer(int *input);
void add_one_double_ptr(int **input);

int main() {
    int x = 5;

    // Call add_one
    add_one(&x);
    printf("add_one: %d\n", x);  // Expected output: 6

    // Call add_one_pointer
    add_one_pointer(&x);
    printf("add_one_pointer: %d\n", x);  // Expected output: 7

    // Use a pointer to x
    int* y = &x;
    add_one_double_ptr(&y);
    printf("add_one_double_ptr: %d\n", x);  // Expected output: 8

    return 0;
}

// Definitions
void add_one(int *input) {
    *input += 1;
}

void add_one_pointer(int *input) {
    *input += 1;
}

void add_one_double_ptr(int **input) {
    **input += 1;
}

