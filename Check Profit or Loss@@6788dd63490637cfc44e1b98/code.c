#include <stdio.h>

int main() {
    float cp, sp;
   
    scanf("%f", &cp);
 
    scanf("%f", &sp);


    if (sp > cp) {
        printf("Profit", sp - cp);
    } 
    else if (sp < cp) {
        printf("Loss", cp - sp);
    } 
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
