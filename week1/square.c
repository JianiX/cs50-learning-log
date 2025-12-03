#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = square(number);
    printf("The square of %d is %d.\n", number, result);

    return 0;
}
