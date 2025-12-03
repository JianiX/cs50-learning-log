#include <stdio.h>

int main(void) {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    int length = 0;

    while (name[length] != '\0') {
        length++;
    }

    printf("The length of your name is: %d\n", length);

    return 0;
}
