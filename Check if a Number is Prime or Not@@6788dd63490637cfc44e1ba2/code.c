// #include <stdio.h>

// int main() {
//     int num;
//     scanf("%d", &num);

//     if (num <= 1) {
//         printf("Not Prime\n");
//     } 
//     else if (num == 2 || num == 3 || num == 5 || num == 7) {  
//         // Directly checking small prime numbers
//         printf("Prime\n");
//     } 
//     else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) { 
//         // If num is divisible by 2, 3, 5, or 7, it's not prime
//         printf("Not Prime\n");
//     } 
//     else {
//         printf("Prime\n");  
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a number
 
    scanf("%d", &num);

    // Handle numbers less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        // Check divisibility from 2 to num-1
        int i;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num);
                return 0;  // Exit the program early if not prime
            }
        }
        // If no divisor was found, the number is prime
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
