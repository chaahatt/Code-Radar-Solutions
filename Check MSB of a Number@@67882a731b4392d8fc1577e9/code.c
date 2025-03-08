#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num & (1 << 31))
        printf("MSB is 1\n");
    else
        printf("MSB is 0\n");

    return 0;
}
