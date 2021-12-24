#include<stdio.h>
double min(double x, double y);
int main(){
    
    min(1.1, 2.1);
    min(15.1, 20.1);
    min(100.1, 1.1);
    
    return 0;
}

double min(double x, double y){
    double min;

    min = x;
    if(y < min)
        min = y;
   
    printf("%f\n", min);

    return min;
}
