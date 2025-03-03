#include <stdio.h>

void scalar_add(float *array, float scalar, int n) {
    for (int i = 0; i < n; i++) {
        array[i] += scalar;
    }
}
