/* 13 */
#include <stdio.h>

struct shape {
    int type;
    union {
        struct { int base, height; } tri;
        struct { int width, height; } rect;
        struct { int radius; } circ;
    } data;
};

int main(void) {
    struct shape s;
    printf("도형의 타입을 입력하시오(0, 1, 2): ");
    scanf("%d", &s.type);

    switch (s.type) {
    case 0:
        printf("가로와 세로의 길이를 입력하시오: ");
        scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
        printf("면적은 %.1f", s.data.tri.base * s.data.tri.height / 2);
        break;
    
    case 1:
        printf("가로와 세로의 길이를 입력하시오: ");
        scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
        printf("면적은 %d", s.data.tri.base * s.data.tri.height);
        break;

    case 2:
        printf("반지름을 입력하시오: ");
        scanf("%d", &s.data.circ.radius);
        printf("면적은 %.1f", s.data.circ.radius * s.data.circ.radius * 3.141592);
        break;
    }

    return 0;
}