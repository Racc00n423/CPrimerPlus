#include<stdio.h>

void main(){
    int i = 100;
    printf("%d\n", i);
    int *pointer = &i;
    printf("%p\n", i);
    printf("%p", pointer);
}
