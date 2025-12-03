#include <stdio.h>

int main(void) {
    int height;

    printf("Enter pyramid height (1–8): ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        // print spaces
        for (int s = 0; s < height - i; s++) {
            printf(" ");
        }
        // print hashes
        for (int h = 0; h < i; h++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
