#include <stdio.h>

int main() {
    float cp, sp;
   
    scanf("%f", &cp);
 
    scanf("%f", &sp);


    if (sp > cp) {
        printf("Profit of %.2f\n", sp - cp);
    } 
    else if (sp < cp) {
        printf("Loss of %.2f\n", cp - sp);
    } 
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
