#include<stdio.h>
int main(void){
  long double h2o = 3.0e-23;
  int quart;


  printf("Enter the quart of water you want to calculate:");
  scanf("%d", &quart);

  printf("The number of water molecules is: %Lf\n", quart*950/h2o);

  return 0;
}
