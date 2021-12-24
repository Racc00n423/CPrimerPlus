#include<stdio.h>
int func(int a, int b, int c);
int main(void){
  func(1,2,3);
}

int func(int a, int b, int c){
  int max = a;
  if(b > max){
      max = b;
  }
  if(c > max){
      max = c;
  }
  printf("%d", max);
  return max;
}
