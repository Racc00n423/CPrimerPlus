#include<stdio.h>
int main(void){
  
  int age;
  long double year = 3.156e7;

  printf("Enter your age:");
  scanf("%d", &age);
  
  printf("Your age is converted to seconds which is: %Lf\n", age * year );


  return 0;
}
