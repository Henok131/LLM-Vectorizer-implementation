#include <stdio.h>
#include <immintrin.h>

void llm_generated_vectorization(float *array, int n) {
    __m256 scalar_vec = _mm256_set1_ps(1.5f);
    for (int i = 0; i < n; i += 8) {
        __m256 vec = _mm256_load_ps(&array[i]);
        vec = _mm256_mul_ps(vec, scalar_vec);
        _mm256_store_ps(&array[i], vec);
    }
}
