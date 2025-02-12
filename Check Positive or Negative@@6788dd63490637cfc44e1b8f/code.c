#include <stdio.h>

int main(){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

  
    if (num1 > 0 ) {
        printf("Positive\n", num1);
    } else if (0 > num1) {  
        printf("Negative\n", num2);
    } else {
        printf("Zero\n");
    }

    return 0;
}
