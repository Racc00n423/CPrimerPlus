#include<stdio.h>
#include<stdlib.h>
double Harmean(double, double);
int main(void){
    double a, b;
    printf("Enter two float number: ");
    scanf("%ls %ls", &a, &b);
    printf("The result is: %ls", Harmean(a,b));
    return 0;
}

double Harmean(double m, double n){
    return (1/(((1/m)+(1/n))/2));
}
