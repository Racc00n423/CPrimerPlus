#include<stdio.h>
void larger_of(double * a, double * b);
int main(void){
    
    double a, b;

    printf("Enter two double number: ");
    while(scanf("%lf %lf", &a, &b) == 2){
        larger_of(&a, &b);
        printf("\n");
    printf("The two number are: %lf %lf\n", a, b);
    }
    return 0;
}

void larger_of(double * a, double * b){

    double temp;

    if(*a > *b){
        temp = *a;
    }
    else{
        temp = *b;
    }
    *a = *b = temp;
    
}





