#include <stdio.h>
#include <string.h>

#define print_matrix(...) wrapper_print_matrix((args_print_matrix){__VA_ARGS__})

typedef struct {
    int* matrix;
    int col;
    int row;
    char* formatter;
} args_print_matrix;

void _print_matrix(int* matrix, int col, int row, char* formatter) {
    char string[4] = "%";
    strcat(string, formatter);
    strcat(string, "\t");

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf(string, *(matrix + i * col + j));
        }
        printf("\n");
    }
}

void matrix_mult(int* A, int* B, int* result, int p, int q, int r) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            *(result + i * p + j) = 0;
            for (int k = 0; k < q; k++) {
                *(result + i * p + j) += *(A + i * p + k) * *(B + k * q + j);
            }
        }
    }
}

void matrix_trans(int* A, int* result, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            *(result + i * p + j) = *(A + j * p + i);
        }
    }
}

/* void print_matrix(int* matrix, int col, int row) {
    return _print_matrix(matrix, col, row, "d");
}
 */

void wrapper_print_matrix(args_print_matrix in) {
    char* _formatter = in.formatter ? in.formatter : "d";
    return _print_matrix(in.matrix, in.col, in.row, _formatter);
}
