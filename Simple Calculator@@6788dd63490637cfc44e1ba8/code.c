#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Taking two numbers first
    scanf("%d %d %c", &num1, &num2, &operator);

    // Switch case to perform the calculation
    switch (operator) {
        case '+': 
            printf("%d\n", num1 + num2);
            break;
        case '-': 
            printf("%d\n", num1 - num2);
            break;
        case '*': 
            printf("%d\n", num1 * num2);
            break;
        case '/': 
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("error\n");
            break;
        case '%': 
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("error\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}
