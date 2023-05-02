#include <stdio.h>

#define p 2
#define q 2
#define r 3

int A[p][q] = { {8, 5}, {4, -3} };
int B[q][r] = { {2, 3, 3}, { 6, 2, 0 } };
int result[p][r];

int main(void) {
    matrix_mult(A, B, result, p, q, r);

    print_matrix(result, p, r);

    return 0;
}