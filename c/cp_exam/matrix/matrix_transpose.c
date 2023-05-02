#include <matrix.h>
#include <stdio.h>

#define p 3

int A[p][p] = { {1, 3, 2}, {7, 6, 3}, {3, 0, 3} };
int result[p][p];

int main(void) {
    matrix_trans(A, result, p);

    print_matrix(result, p, p);

    return 0;
}