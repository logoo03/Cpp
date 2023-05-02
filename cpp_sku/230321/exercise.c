#include <stdio.h>
#pragma disable(warning:4996) // For Visual Studio

int main() {
    printf("2022305080 주현준\n");

    int start, end, sum = 0;
    printf("시작수를 입력하세요: ");
    scanf("%d", &start);
    printf("끝수를 입력하세요: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        sum += i % 3 == 0 ? i : 0;
    }
    printf("%d ~ %d의 수 중 3의 배수의 합은 %d입니다.\n", start, end, sum);

    return 0;
}

