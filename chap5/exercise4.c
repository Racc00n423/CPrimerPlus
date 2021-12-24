#include<stdio.h>

int main(void){

    float n;
    const double inch = 0.3937;
    const double feet = 0.0328;

    while(n >= 0){
        printf("Enter a height in centimeters: ");
        scanf("%f", &n);
        
        printf("%.1f cm = %.1f feet, %.1f inches", n, n*feet, n*inch);
        printf("\n");
      
    }
    return 0;
}
