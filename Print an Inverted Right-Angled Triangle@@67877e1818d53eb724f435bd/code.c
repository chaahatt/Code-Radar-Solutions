#include <stdio.h>

int main() {
    int n ;
    for (int i = n; i >= 1; i--) {  
        for (int j = 0; j < i; j++) {  
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
