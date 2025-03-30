#include <stdio.h>

int main() {
    int rows;
    
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {  // Loop from rows to 1
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
