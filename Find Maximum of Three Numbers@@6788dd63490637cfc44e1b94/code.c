#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    max = a;  // Assume the first number is the largest

    if (b > max) {
        max = b;  // Update max if b is greater
    }
    if (c > max) {
        max = c;  // Update max if c is greater
    }

    printf("Maximum integer: %d\n", max);
    return 0;
}