/* 05 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int x, y;
};

int equal(struct point p1, struct point p2);

int main(void) {
    struct point p1, p2;
    printf("p1 입력: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("p2 입력: ");
    scanf("%d %d", &p2.x, &p2.y);
    
    printf("(%d, %d) ", p1.x, p1.y);
    if (equal(p1, p2)) printf("==");
    else printf("!=");

    printf(" (%d, %d)", p2.x, p2.y);
    return 0;
}

int equal(struct point p1, struct point p2) {
    if (p1.x == p2.x) {
        if (p1.y == p2.y) return 1;
    }
    return 0;
}