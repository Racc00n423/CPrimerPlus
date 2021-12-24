#include<stdio.h>
#define PAGES 959
int main(void){
  printf("*%d*\n", PAGES);
  printf("*%2d*\n", PAGES); 
  printf("*%3d*\n", PAGES); 
  printf("*%4d*\n", PAGES); 
  printf("*%5d*\n", PAGES); 
  printf("*%6d*\n", PAGES); 
  printf("*%7d*\n", PAGES); 
  printf("*%8d*\n", PAGES); 
  printf("*%9d*\n", PAGES); 
  printf("*%10d*\n", PAGES);
  printf("*%-10d*\n", PAGES);
  
  return 0;
}
