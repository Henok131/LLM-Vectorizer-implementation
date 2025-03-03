#include <stdio.h>
#include <immintrin.h>

void safe_vectorization(float *array, int n) {
    for (int i = 0; i < n; i += 8) {
        __m256 vec = _mm256_load_ps(&array[i]);
        vec = _mm256_add_ps(vec, _mm256_set1_ps(1.0f));
        _mm256_store_ps(&array[i], vec);
    }
}
