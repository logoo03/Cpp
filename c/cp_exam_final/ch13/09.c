#include <stdio.h>

int main() {
    int i;
    for (i = 0;i < 10;i++)
    {
        int j;
        for (j = 0; j < i + 1;j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}