// #include <std.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("Set", a , find_lsb(num));
//     return 0;
// }


#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    if (num & 1)
        printf("LSB is 1 (Odd number)\n");
    else
        printf("LSB is 0 (Even number)\n");

    return 0;
}
