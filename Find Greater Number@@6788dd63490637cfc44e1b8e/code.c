#include <stdio.h>

int main(){
    int num1, num2;

    // Corrected scanf format
    scanf("%d %d", &num1, &num2);

    // Fixed if-else structure
    if (num1 > num2) {
        printf("%d is greater\n", num1);
    } 
    else  (num2 > num1) {  
        printf("%d is greater\n", num2);
    } 

    return 0;
}
