#include<stdio.h>
#include<stdlib.h>
double harmean(double, double);
int main(void){

    double a, b;

    printf("Enter two number: ");
    while(scanf("%lf %lf", &a, &b) == 2){
        harmean(a, b);
    }
    
    return 0;
}


double harmean(double a, double b){

    double r_a, r_b;
    double ave_sum;
    double r_ave;

    r_a = 1/a;
    r_b = 1/b;
    ave_sum = (r_a + r_b)/2;
    r_ave = 1/ave_sum;
    printf("The result is: %f\n", r_ave);

    return r_ave;
}


