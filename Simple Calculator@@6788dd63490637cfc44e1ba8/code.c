#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

     
    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &operator); 

    switch (operator) {
        case '+': 
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-': 
            result = num1 - num2;
            printf(" %d\n", result);
            break;
        case '*': 
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/': 
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("error\n"); // Handles division by zero
            break;
        // default:
        //     printf("error\n"); // Handles invalid operators
    }

    return 0; // Missing return statement
}
