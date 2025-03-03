#include <immintrin.h>
#include <stdio.h>

#define N 512

void avx_matrix_mult(float A[N][N], float B[N][N], float C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j += 8) { 
            __m256 c = _mm256_load_ps(&C[i][j]);
            for (int k = 0; k < N; k++) {
                __m256 a = _mm256_set1_ps(A[i][k]);
                __m256 b = _mm256_load_ps(&B[k][j]);
                c = _mm256_fmadd_ps(a, b, c);
            }
            _mm256_store_ps(&C[i][j], c);
        }
    }
}
