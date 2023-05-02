/* 08 */
#include <stdio.h>

typedef struct circle CIRCLE;

struct point {
    int x, y;
};

struct circle {
    struct point center;
    double radius;
};

double area(CIRCLE c) {
    return c.radius * c.radius * 3.14;
}

double perimeter(CIRCLE c) {
    return 2 * 3.141592 * c.radius;
}

int main() {
    struct point cen = { 0, 0 };
    CIRCLE c = { cen, 10.0 };
    printf("원의 중심점: (%d, %d)\n", cen.x, cen.y);
    printf("원의 반지름: %.1f\n", c.radius);

    printf("원의 면적 = %.2f, 원의 둘레 = %.2f\n", area(c), perimeter(c));

    return 0;
}