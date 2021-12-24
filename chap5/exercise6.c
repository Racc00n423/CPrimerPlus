#include<stdio.h>

int main(void){

    int count, square;
    count = 0;
    square = 0;

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    while(count <= n){
       square = count * count + square; 
        count++;
    }
    printf("square = %d\n", square);


    return 0;
}
