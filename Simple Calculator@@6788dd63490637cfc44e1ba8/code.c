#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    
    scanf(" %c", &operator); 
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+': 
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-': 
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*': 
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/': 
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
