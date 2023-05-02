/* 02 */
#include <stdio.h>

struct account {
    int number;
    char name[20];
    int balance;
};

int main(void) {
    struct account a = { 1, "홍길동", 100000 };
    printf("{ %d, %s, %d }", a.number, a.name, a.balance);
    return 0;
}