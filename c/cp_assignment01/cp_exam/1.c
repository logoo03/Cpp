#include <stdio.h>

int find_gcd(int a, int b);
int find_lcm(int a, int b, int g);

int main(void) {
    int x, y, gcd, lcm;
    scanf("%d %d", &x, &y);
    gcd = find_gcd(x, y);
    lcm = find_lcm(x, y, gcd);
    printf("최대공약수: %d\n최소공배수: %d\n", gcd, lcm);
    return 0;
}

int find_gcd(int a, int b) {
    while (b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int find_lcm(int a, int b, int g) {
    return (int)(a * b / g);
}