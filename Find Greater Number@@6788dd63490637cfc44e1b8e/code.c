#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater\n", num1);
    } 
    else {
        printf("%d is greater\n", num2);
    }

    return 0;
}

