#include<stdio.h>
void Temperatures(double *f); 
int main(void){

    double f; //Fahrenheit temperature
    printf("Enter the Fahrenheit temperature(f): ");
    while((scanf("%lf", &f)) == 1 ){
        Temperatures(&f);
    }
    return 0;
}

void Temperatures(double *f){
    double c; //Celsius
    double k; //Kelvin
    c = 5.0 / 9.0 *( *f - 32.0);
    k = c + 273.16;
    printf("The Fahrenheit temperature is: %.2lf, the Celsius temperature is: %.2lf, the Kelvin temperature is: %.2lf", *f, c, k);

}
