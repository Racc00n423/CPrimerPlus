#include<stdio.h>
int main(void){
    
    int i = 1;
    float n;
    printf("watch out! Here come a bunch of franctions!\n");
    while(i < 30){
        n = 1/i;
        printf("  %f\n", n);
        i++;
    }
    printf("That's all, folks!\n");
    return 0;
}
