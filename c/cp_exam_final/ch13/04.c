#include <stdio.h>

struct complex {
    double real;
    double imag;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main() {
    struct complex c1 = { 1, 2 };
    struct complex c2 = { 2, 3 };

    struct complex c3 = complex_add(c1, c2);

    printf("%.2f + %.2fi", c3.real, c3.imag);

    return 0;
}

struct complex complex_add(struct complex c1, struct complex c2) {
    struct complex ret = {
        c1.real + c2.real,
        c1.imag + c2.imag,
    };

    return ret;
}