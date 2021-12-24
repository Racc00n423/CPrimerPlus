// printchar.c -- input a ASCII value to output its character
#include<stdio.h>
int main(void){
  
  char n;

  printf("Input a number:");
  scanf("%d", &n);

  printf("The value %d is the character '%c'\n", n,n);


  return 0;
}
