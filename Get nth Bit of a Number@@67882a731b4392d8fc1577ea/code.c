#include <stdio.h>

int getNthBit(int num, int n) {
    return (num & (1 << n)) ? 1 : 0; 
}

int main() {
    int num, n;
    
  
    scanf("%d", &num);
    
    printf("Enter the bit position (0-based index): ");
    scanf("%d", &n);
    
    printf("The %dth bit of %d is: %d\n", n, num, getNthBit(num, n));

    return 0;
}
