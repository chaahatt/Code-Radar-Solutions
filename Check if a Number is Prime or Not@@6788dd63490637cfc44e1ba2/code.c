#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n");
    } 
    else if (num == 2 || num == 3 || num == 5 || num == 7) {  
        // Directly checking small prime numbers
        printf("Prime\n");
    } 
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) { 
        // If num is divisible by 2, 3, 5, or 7, it's not prime
        printf("Not Prime\n");
    } 
    else {
        printf("Prime\n");  
    }

    return 0;
}
