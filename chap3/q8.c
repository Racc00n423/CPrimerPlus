#include<stdio.h>

void one_three();
void two();

int main(void){
  printf("starting now:\n");
  
  one_three();

  two();

  printf("three\n");

  printf("done!\n");

}

void one_three(){
  printf("one\n");

}

void two(){
  printf("two\n");
}
