#include<stdio.h>

int main(void){

    int count, sum;
    count = 0;
    sum = 0;

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    while(count <= n){
        sum = sum + count;
        count++;
    }
    printf("sum = %d\n", sum);


    return 0;
}
