#include <stdio.h>

struct point {
    int x, y;
};

int quadrant(struct point p);

int main() {
    struct point p;
    scanf("%d %d", &p.x, &p.y);
    printf("%d사분면에 있습니다.\n", quadrant(p));
}

int quadrant(struct point p) {
    if (p.x > 0) {
        if (p.y > 0) {
            return 1;
        } else {
            return 4;
        }
    } else {
        if (p.y > 0) {
            return 2;
        } else {
            return 3;
        }
    }
}