#include <stdio.h>

float sum_array(float *array, int n) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        sum += array[i]; // Order-sensitive operation
    }
    return sum;
}
