// #include<stdio.h>
// int main(){
// int a,b;
// scanf("%d %d", &a, &b);
// if(a == b*2){
//     printf("Yes");
// }
// else{
//     printf("No");
// }
// }
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Fix: Correct scanf format

    if (a == b * 2) {  // Fix: Use == for comparison instead of =
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }

    return 0;  // Fix: Add return statement for proper program termination
}
