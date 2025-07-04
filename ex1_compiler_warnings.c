#include <stdio.h>

int foo(int x) {
    return x + 1;
}

int main() {
    int x = 5;
    int y = foo(x);
    printf("y = %d\n", y);
    return 0;
}
