#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // 注意前面有空格，用来跳过换行符

    printf("Enter second number: ");
    scanf("%d", &b);

    int result;

    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b != 0) {
            result = a / b;
        } else {
            printf("Error: Division by zero!\n");
            return 1;
        }
    } else {
        printf("Invalid operator.\n");
        return 1;
    }

    printf("%d %c %d = %d\n", a, op, b, result);

    return 0;
}
