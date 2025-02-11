#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > 0 || num2 > 0) {
        printf("Both numbers are greater than 0\n");
    } else {
        printf("At least one number is not greater than 0\n");
    }

    return 0;
}
