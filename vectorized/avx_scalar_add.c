#include <immintrin.h>
#include <stdio.h>

void avx_scalar_add(float *array, float scalar, int n) {
    __m256 scalar_vec = _mm256_set1_ps(scalar);
    for (int i = 0; i < n; i += 8) {
        __m256 vec = _mm256_load_ps(&array[i]);
        vec = _mm256_add_ps(vec, scalar_vec);
        _mm256_store_ps(&array[i], vec);
    }
}
