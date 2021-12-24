#include<stdio.h>
double cubic(double *n);
int main(void){

    double n;
    printf("Enter a number to compute its cubic value: ");
    scanf("%lf", &n);
    printf("The cubic of %.3lf is %.3lf.\n", n, cubic(&n));
    return 0;
}

double cubic(double *n){
    return *n * *n * *n;
}
