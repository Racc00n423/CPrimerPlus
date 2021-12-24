#include<stdio.h>
void move(double *x, double *y, double *z);

int main(void){
    
    double x, y, z;
    printf("Enter three double number: ");
    while(scanf("%lf %lf %lf", &x, &y, &z) == 3){
        move(&x, &y, &z);
        printf("The smallest number is %lf, middle number is %lf, and the largest number is %lf\n", x, y, z);
    }

    return 0;
}

void move(double *x, double *y, double *z){
    
   double temp;

   if(*x > *y){
       // switch x and y
       temp = *y;
       *y = *x;
       *x = temp;
   }

   if(*y > *z){
       //switch y and z
       temp = *z;
       *z = *y;
       *y = temp;
    
      if(*x > *y){
       // switch x and y
       temp = *y;
       *y = *x;
       *x = temp;
      }  
   }
    
}
