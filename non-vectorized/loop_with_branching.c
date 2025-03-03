#include <stdio.h>

void process_array(float *array, int n, float scale) {
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            array[i] *= scale;
        }
    }
}
