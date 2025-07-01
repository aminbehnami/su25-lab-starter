#include <stdio.h>

// Function that adds one to the value at the given int pointer
void add_one(int *input) {
    // *input gets the value at address input, just like *my_var_p in the 
guide
    *input += 1;
}

// Function that adds one using a pointer to input
void add_one_pointer(int *input) {
    // input points to an int, so we dereference it
    *input += 1;
}

// Function that adds one using a pointer to a pointer
void add_one_double_ptr(int **input) {
    // *input gets the address of the int, **input dereferences that to 
get its value
    **input += 1;
}

int main() {
    int x = 5;

    // Pass address of x to add_one (like passing &my_var to my_var_p)
    add_one(&x);
    printf("add_one: %d\n", x);  // should print 6

    // Pass address of x again to add_one_pointer
    add_one_pointer(&x);
    printf("add_one_pointer: %d\n", x);  // should print 7

    // Create a pointer y to x
    int* y = &x;

    // Pass address of y (which is int**) to add_one_double_ptr
    add_one_double_ptr(&y);
    printf("add_one_double_ptr: %d\n", x);  // should print 8

    return 0;
}

