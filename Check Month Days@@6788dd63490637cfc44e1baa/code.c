#include <stdio.h>

int main() {
    int month;
    
    // Taking month number as input
    scanf("%d", &month);

    // Checking number of days based on month number
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        printf("31\n");
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30\n");
    } 
    else if (month == 2) {
        printf("28\n");  // Assuming non-leap year
    } 
    else {
        printf("Invalid\n");  // If input is not between 1-12
    }

    return 0;
}
