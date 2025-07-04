#include <stdio.h>
#include <stdlib.h>
#include "ex7_vector.h"

Vector* vector_new() {
    Vector *retval = malloc(sizeof(Vector));
    if (retval == NULL) {
        return NULL;
    }

    retval->data = NULL;
    retval->size = 0;

    return retval;
}

void vector_delete(Vector *v) {
    if (v == NULL) return;
    free(v->data);
    free(v);
}

int vector_get(Vector *v, int loc) {
    if (v == NULL || loc >= v->size || v->data == NULL) {
        return 0;
    }
    return v->data[loc];
}

void vector_set(Vector *v, int loc, int value) {
    if (v == NULL) return;

    if (loc >= v->size) {
        int *new_data = realloc(v->data, (loc + 1) * sizeof(int));
        if (new_data == NULL) {
            return;
        }

        for (int i = v->size; i < loc + 1; i++) {
            new_data[i] = 0;
        }

        v->data = new_data;
        v->size = loc + 1;
    }

    v->data[loc] = value;
}
