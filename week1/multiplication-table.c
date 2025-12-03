#include <stdio.h>

int main(void) {
    printf("Multiplication Table (1 to 5):\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%3d ", i * j);   // %3d ensures nice alignment
        }
        printf("\n");
    }

    return 0;
}
