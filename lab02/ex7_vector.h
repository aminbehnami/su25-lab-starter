#ifndef EX7_VECTOR_H
#define EX7_VECTOR_H

#include <stdlib.h>

// Typedef so we can use "Vector" instead of "struct vector_t"
typedef struct vector_t {
    int *data;
    size_t size;
} Vector;

Vector* vector_new();
void vector_delete(Vector* vec);
int vector_get(Vector* vec, int index);
void vector_set(Vector* vec, int index, int value);

#endif
