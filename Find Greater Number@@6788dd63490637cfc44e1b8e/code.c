#include <stdio.h>

int main(){
    int num1, num2;

    // Corrected scanf format
    scanf("%d %d", &num1, &num2);

    // Fixed if-else structure
    if (num1 > num2) {
        printf("%d is greater\n", num1);
    } else if (num2 > num1) {  // Corrected else-if syntax
        printf("%d is greater\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
