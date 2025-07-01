#include <stdio.h>

void add_one(int *input);
void add_one_pointer(int *input);
void add_one_double_ptr(int **input);

int main() {
    int x = 5;

    add_one(&x);
    printf("add_one: %d\n", x);  // 6

    add_one_pointer(&x);
    printf("add_one_pointer: %d\n", x);  // 7

    int* y = &x;
    add_one_double_ptr(&y);
    printf("add_one_double_ptr: %d\n", x);  // 8

    return 0;
}

void add_one(int *input) {
    *input += 1;
}

void add_one_pointer(int *input) {
    *input += 1;
}

void add_one_double_ptr(int **input) {
    **input += 1;
}

