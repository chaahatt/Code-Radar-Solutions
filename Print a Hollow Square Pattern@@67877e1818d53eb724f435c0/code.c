#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n; j++) {  
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");  // Print '*' with space for correct alignment
            } else {
                printf("  ");  // Print two spaces for the hollow part
            }
        }
        printf("\n");  // Move to the next line after a row is printed
    }

    return 0;
}
